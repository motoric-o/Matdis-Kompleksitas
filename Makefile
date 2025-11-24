SRCS := $(wildcard *.cpp)
EXECS := $(SRCS:.cpp=.exe)

all: $(EXECS)

%.exe : %.cpp
	g++ -std=c++17 $< -o ./build/$@
	
