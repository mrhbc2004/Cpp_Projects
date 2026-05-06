.PHONY: run clean

CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Object files
OBJ = main.o Book.o User.o Library.o

# Final executable
library: $(OBJ)
	@$(CXX) $(OBJ) -o library.exe

# Compile each .cpp → .o
%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $<

# Run program
run: library
	@./library.exe

# Clean build files
clean:
	@rm -f *.o *.exe && echo "Cleaned the logs"