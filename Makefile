CXX = g++
CXXFLAGS = -std=c++14 -Wall
LDFLAGS =

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = coffee

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $^

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJ) $(EXEC)
