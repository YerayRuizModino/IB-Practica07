CXX = g++
CXXFLAGS = -std=c++17 -Wall
LDFLAGS =

all: LeapYear

LeapYear: LeapYear.o
	$(CXX) $(CXXFLAGS) -o $@ $<

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o
