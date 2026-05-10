.PHONY: run clean

CXX = g++
CXXFLAGS = -std=c++17 -Wall

OBJ = main.o Account.o SavingsAccount.o CurrentAccount.o Bank.o 

bank: $(OBJ)
	@$(CXX) $(OBJ) -o bank

%.o : %.cpp	
	@$(CXX) $(CXXFLAGS) -c $<

run: bank
	@./bank

clean:
	@rm -f *.o bank