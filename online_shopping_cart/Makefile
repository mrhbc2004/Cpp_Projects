.PHONY : run clean

CXX = g++
CXXFLAGS = -std=c++17 -Wall

OBJ = main.o Product.o Order.o User.o Cart.o

shop: $(OBJ)
	@$(CXX) $(OBJ) -o shop

%.o : %.cpp
	@$(CXX) $(CXXFLAGS) -c $<

run: shop
	@./shop

clean:
	@rm -f *.o shop