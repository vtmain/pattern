Target = pat
CC = g++

CXXFLAGS := -Wall -O0 -m64 -g

CPP := $(shell echo src/*.cpp)
OBJ := $(patsubst %.cpp, %.o, $(CPP))

$(Target) : $(OBJ)
	$(CC) $^ $(CXXFLAGS) -o $@

.PHONY :clean
clean :
	rm -f $(OBJ)
	rm -f $(Target)	
