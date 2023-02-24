C++ := g++ -std=c++20
C++FLAGS := -Wall -Weffc++ -Wextra -Wsign-conversion -Wconversion

all: sorttreetest sorttreetest2 destroy_at_1

sorttreetest2: sorttreetest2.o sorttree.o
	$(C++) $(C++FLAGS) $^ -o $@
sorttreetest: sorttreetest.o sorttree.o
	$(C++) $(C++FLAGS) $^ -o $@
sorttreetest.o: sorttreetest.cpp sorttree.h
	$(C++) $(C++FlAGS) -c $<
sorttree.o: sorttree.cpp sorttree.h
	$(C++) $(C++FlAGS) -c $<
destroy_at_1: destroy_at_1.cpp
	$(C++) $(C++FLAGS) $^ -o $@
