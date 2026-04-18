#Compiler 
CXX = g++

# Compiler flags
CXXFLAGS = -Wall -g -std=c++17

#Target Executable
TARGET = solution

#Source File(s)
SOURCE = solution.cpp

all: $(TARGET)

solution: $(SOURCE)
	$(CXX) $(CXXFLAGS) $(SOURCE) -o $(TARGET)

test:
	python3 -m pytest test_game.py

clean:
	rm -f $(TARGET)
