CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

all: Fibonacci

Fibonacci: Fibonacci.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o

