# Use cmd.exe rules
SHELL := cmd

CXX := g++
CXXFLAGS := -std=c++17 -O2 -Wall -Wextra

# Windows paths need backslashes escaped in Makefiles
BUILD_WIN := ..\\..\\build
BIN := $(BUILD_WIN)\\iss.exe

.PHONY: all run clean

all: $(BIN)

# Create the build dir if missing (cmd.exe syntax)
$(BUILD_WIN):
	if not exist "$(BUILD_WIN)" mkdir "$(BUILD_WIN)"

$(BIN): main.cpp | $(BUILD_WIN)
	$(CXX) $(CXXFLAGS) -o "$(BIN)" main.cpp

run: all
	"$(BIN)" ..\\..\\sim\\test_programs\\program.txt

clean:
	if exist "$(BUILD_WIN)" rmdir /S /Q "$(BUILD_WIN)"