CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

all: Binary2Decimal

Binary2Decimal: Binary2Decimal.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o

