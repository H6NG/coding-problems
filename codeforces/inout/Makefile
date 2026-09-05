CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17

TARGET = main

all: $(TARGET)

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) main.cpp -o $(TARGET)

run: $(TARGET)
	./$(TARGET) < input.txt > output.txt

clean:
	rm -f $(TARGET) output.txt
