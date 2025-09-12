#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <thread>
#include <chrono>

int registers[32] ={0};
int memory[1024] = {0}; // Simulate 1KB memory (adjust as needed)
bool skip_print = false;
bool enable_delay = false;


std::string commaclean(const std::string& str) { // pass by reference
    if (!str.empty() && str.back() == ',') {
        return str.substr(0, str.size() - 1);
    }
    return str;
}

int main() {
    int cycle = 1;
    int last_written = -1;
    std::cout << "\nRISC-V Instruction-Level Simulator Starting..." << std::endl;
    std::cout << "_______________________" << std::endl;
    
    std::ifstream infile("../testbench/program.txt"); //finder
    if (!infile) {
        std::cerr << "Failed to open instruction file ../testbench/program.txt" << std::endl; // error
        return 1;
    }

    int line_count = 0;

    std::string line;
    while (std::getline(infile, line)) {
        if (line.empty()) {
        continue; // skip empty lines
        }
// ===================================== Fetch Stage =====================================

        if (!skip_print) {
            std::cout << "\n[Cycle " << cycle++ << "] Fetch: " << line << std::endl;
            if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));
        }
        skip_print = false;

        std::istringstream iss(line); // input string stream
        std::string opcode, // opcode
                        rd,            // Destination Register
                        rs1,           // Source Registor
                 imm_or_rs2;    // either Immediate or Source
// ===================================== Decode Stage =====================================

        iss >> opcode >> rd >> rs1 >> imm_or_rs2; // Machine Language line up
// ===================================== Hazard =====================================


        if (opcode.empty()) {
            continue;  // skip empty opcode
        }
        else if ((opcode != "lw" && opcode != "sw") && (rd.empty() || rs1.empty() || imm_or_rs2.empty())) {
            std::cerr << "Malformed instruction skipped: " << line << std::endl;
            continue;
        }

        else if ((opcode == "lw" || opcode == "sw") && (rd.empty() || rs1.empty())) {
            std::cerr << "Malformed instruction skipped: " << line << std::endl;
            continue;
        }
// ===================================== Decode =====================================
            rd = commaclean(rd);  
            rs1 = commaclean(rs1);  
            imm_or_rs2 = commaclean(imm_or_rs2);  
            std::cout << "[Cycle " << cycle++ << "] Decode: Opcode " << opcode 
            << ", rd " << rd << ", rs1 " << rs1 
            << ", imm/rs2 " << imm_or_rs2 << std::endl;
            if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));

// ===================================== Hazard =====================================

        if (opcode != "lw" && opcode != "sw") {
            bool hazard = false;

            if (rs1.size() > 1 && rs1[0] == 'x') {
                try {
                    if (stoi(rs1.substr(1)) == last_written) {
                        hazard = true;
                    }
                } catch (...) {}
            }

            if (imm_or_rs2.size() > 1 && imm_or_rs2[0] == 'x') {
                try {
                    if (stoi(imm_or_rs2.substr(1)) == last_written) {
                        hazard = true;
                    }
                } catch (...) {}
            }

            if (hazard) {
                std::cout << "[Hazard Detected] Instruction depends on x" << last_written << " - inserting stall cycle" << std::endl;
                std::cout << "[Cycle " << cycle++ << "] Stall: Resolving hazard" << std::endl;
                if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));
            }
        }
// ===================================== Executing =====================================

        std::cout << "[Cycle " << cycle++ << "] Execute: Performing " << opcode << " operation..." << std::endl;
        if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));
// ===================================== Memory =====================================

        std::cout << "[Cycle " << cycle++ << "] Memory: (Simulated memory stage)" << std::endl;
        if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));
// ===================================== Writeback =====================================

        std::cout << "[Cycle " << cycle++ << "] Writeback: Updating registers" << std::endl;
        if (enable_delay) std::this_thread::sleep_for(std::chrono::milliseconds(300));
// ===================================== Execute Stage =====================================

        if (rd.size() > 1 && rd[0] == 'x' && rs1.size() > 1 && rs1[0] == 'x') {
            int rd_num, rs1_num;
            try {
                rd_num = stoi(rd.substr(1));
                rs1_num = stoi(rs1.substr(1));
            } catch (...) {
                std::cerr << "Invalid register format in instruction: " << line << std::endl;
                continue;
            }
            if (rd_num < 0 || rd_num >= 32 || rs1_num < 0 || rs1_num >= 32) { // Exception
                std::cerr << "Invalid register index in instruction: " << line << std::endl;
                continue;
            }

// ===================================== Execute Stage (I-Type) =====================================

            if (opcode.back() == 'i') {
                int immediate;
                try {
                    immediate = stoi(imm_or_rs2);
                } catch (...) {
                    std::cerr << "Invalid immediate format in instruction: " << line << std::endl;
                    continue;
                }
                if (opcode == "addi") {
                    registers[rd_num] = registers[rs1_num] + immediate;
                    std::cout << "Executed addi: x" << rd_num << " = x" << rs1_num << " + " << immediate << std::endl;
                }
                else if (opcode == "andi") {
                    registers[rd_num] = registers[rs1_num] & immediate;
                    std::cout << "Executed andi: x" << rd_num << " = x" << rs1_num << " & " << immediate << std::endl;
                }
                else if (opcode == "ori") {
                    registers[rd_num] = registers[rs1_num] | immediate;
                    std::cout << "Executed ori: x" << rd_num << " = x" << rs1_num << " | " << immediate << std::endl;
                }
                else if (opcode == "xori") {
                    registers[rd_num] = registers[rs1_num] ^ immediate;
                    std::cout << "Executed xori: x" << rd_num << " = x" << rs1_num << " ^ " << immediate << std::endl;
                }
                else if (opcode == "slli") {
                    registers[rd_num] = registers[rs1_num] << immediate;
                    std::cout << "Executed slli: x" << rd_num << " = x" << rs1_num << " << " << immediate << std::endl;
                }
                else if (opcode == "srli") {
                    registers[rd_num] = (unsigned int)registers[rs1_num] >> immediate;
                    std::cout << "Executed srli: x" << rd_num << " = x" << rs1_num << " >> " << immediate << std::endl;
                }
                else if (opcode == "srai") {
                    registers[rd_num] = registers[rs1_num] >> immediate;
                    std::cout << "Executed srai: x" << rd_num << " = x" << rs1_num << " >> " << immediate << " (arithmetic)" << std::endl;
                }
            }

// ===================================== Execute Stage (R-Type) =====================================
            else if (imm_or_rs2.size() > 1 && imm_or_rs2[0] == 'x') {
                int rs2_num;
                try {
                    rs2_num = stoi(imm_or_rs2.substr(1));
                } catch (...) {
                    std::cerr << "Invalid second source register format in instruction: " << line << std::endl;
                    continue;
                }
                if (rs2_num < 0 || rs2_num >= 32) { // Exception
                    std::cerr << "Invalid register index in instruction: " << line << std::endl;
                    continue;
                }
                if (opcode == "add") {
                    registers[rd_num] = registers[rs1_num] + registers[rs2_num];
                    std::cout << "Executed add: x" << rd_num << " = x" << rs1_num << " + x" << rs2_num << std::endl;
                }
                else if (opcode == "sub") {
                    registers[rd_num] = registers[rs1_num] - registers[rs2_num];
                    std::cout << "Executed sub: x" << rd_num << " = x" << rs1_num << " - x" << rs2_num << std::endl;
                }
                else if (opcode == "mul") {
                    registers[rd_num] = registers[rs1_num] * registers[rs2_num];
                    std::cout << "Executed mul: x" << rd_num << " = x" << rs1_num << " * x" << rs2_num << std::endl;
                }
                else if (opcode == "and") {
                    registers[rd_num] = registers[rs1_num] & registers[rs2_num];
                    std::cout << "Executed and: x" << rd_num << " = x" << rs1_num << " & x" << rs2_num << std::endl;
                }
                else if (opcode == "or") {
                    registers[rd_num] = registers[rs1_num] | registers[rs2_num];
                    std::cout << "Executed or: x" << rd_num << " = x" << rs1_num << " | x" << rs2_num << std::endl;
                }
                else if (opcode == "xor") {
                    registers[rd_num] = registers[rs1_num] ^ registers[rs2_num];
                    std::cout << "Executed xor: x" << rd_num << " = x" << rs1_num << " ^ x" << rs2_num << std::endl;
                }
                else if (opcode == "sll") {
                    registers[rd_num] = registers[rs1_num] << registers[rs2_num];
                    std::cout << "Executed sll: x" << rd_num << " = x" << rs1_num << " << x" << rs2_num << std::endl;
                }
                else if (opcode == "srl") {
                    registers[rd_num] = (unsigned int)registers[rs1_num] >> registers[rs2_num];
                    std::cout << "Executed srl: x" << rd_num << " = x" << rs1_num << " >> x" << rs2_num << std::endl;
                }
                else if (opcode == "sra") {
                    registers[rd_num] = registers[rs1_num] >> registers[rs2_num];
                    std::cout << "Executed sra: x" << rd_num << " = x" << rs1_num << " >> x" << rs2_num << " (arithmetic)" << std::endl;
                }
            }
// ===================================== Execute Stage (Branch Operation) =====================================
            else if (!imm_or_rs2.empty()) {
                int offset;
                try {
                    offset = stoi(imm_or_rs2);
                } catch (...) {
                    std::cerr << "Invalid branch offset format in instruction: " << line << std::endl;
                    continue;
                }
                if (opcode == "beq" && registers[rd_num] == registers[rs1_num]) {
                    if (line_count + offset < 0) {
                        std::cerr << "Branch offset causes negative line index. Skipping branch." << std::endl;
                    } else {
                        std::cout << "Branch taken: jumping " << offset << " lines" << std::endl;
                        infile.clear(); infile.seekg(0);
                        for (int i = 0; i < line_count + offset; i++) std::getline(infile, line);
                        line_count += offset; skip_print = true; continue;
                    }
                }
                if (opcode == "bne" && registers[rd_num] != registers[rs1_num]) {
                    if (line_count + offset < 0) {
                        std::cerr << "Branch offset causes negative line index. Skipping branch." << std::endl;
                    } else {
                        std::cout << "Branch taken: jumping " << offset << " lines" << std::endl;
                        infile.clear(); infile.seekg(0);
                        for (int i = 0; i < line_count + offset; i++) std::getline(infile, line);
                        line_count += offset; skip_print = true; continue;
                    }
                }
            }
            last_written = (opcode != "sw") ? rd_num : -1;
        }
// ===================================== Execute Stage (Memory Operation) =====================================
        else if (opcode == "lw" || opcode == "sw") {
        size_t open = rs1.find('('), close = rs1.find(')');
        if (open == std::string::npos || close == std::string::npos || close <= open + 1) {
            std::cerr << "Malformed memory instruction skipped: " << line << std::endl;
            continue;
        }

        int offset, base_reg, rd_num;
        try {
            offset = stoi(rs1.substr(0, open));
            base_reg = stoi(rs1.substr(open + 2, close - open - 2));
            rd_num = stoi(rd.substr(1));
        } catch (...) {
            std::cerr << "Invalid memory instruction format: " << line << std::endl;
            continue;
        }

        if (base_reg < 0 || base_reg >= 32 || rd_num < 0 || rd_num >= 32) {
            std::cerr << "Invalid register index in instruction: " << line << std::endl;
            continue;
        }

        int address = registers[base_reg] + offset;
            if (address < 0 || address >= 1024) { // Exception
                std::cerr << "Memory access out of bounds: " << address << std::endl;
                continue;
            }

            if (opcode == "lw") {
                registers[rd_num] = memory[address];
                std::cout << "Executed lw: x" << rd_num << " = MEM[" << address << "] = " << registers[rd_num] << std::endl;
                last_written = rd_num;
            }
            else if (opcode == "sw") {
                memory[address] = registers[rd_num];
                std::cout << "Executed sw: MEM[" << address << "] = x" << rd_num << " = " << registers[rd_num] << std::endl;
                last_written = -1;
            }
        }

        registers[0] = 0;

        std::cout << "Opcode: " << opcode << std::endl;
        std::cout << "Destination Register: " << rd << std::endl;
        std::cout << "Source Register: " << rs1 << std::endl;
        std::cout << "Immediate or Source 2: " << imm_or_rs2 << std::endl;
        std::cout << "_______________________" << std::endl;
        std::cout << "\nRegister State:" << std::endl;
        for (int i = 0; i < 17; i++)
            std::cout << "x" << i << " = " << registers[i] << std::endl;
        std::cout << "_______________________" << std::endl;

        line_count++;
    }

    infile.close();
    return 0;
}