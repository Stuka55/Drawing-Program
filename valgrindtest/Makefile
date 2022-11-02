CC = g++
FLAGS = -std=c++14 -Wall -g

all: valgrindtest

valgrindtest: valgrindtest.cpp Vector.h
	$(CC) $(FLAGS) valgrindtest.cpp -o valgrindtest

clean:
	rm valgrindtest valgrindtest.tar 

tar:
	tar cf valgrindtest.tar valgrindtest.scr makefile valgrindtest.cpp Vector.h