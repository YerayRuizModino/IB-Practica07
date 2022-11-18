CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

all: Decimal2Binary

Decimal2Binary: Decimal2Binary.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o

