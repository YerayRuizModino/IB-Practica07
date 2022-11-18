CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

all: SumaDigitos

SumaDigitos: SumaDigitos.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o

