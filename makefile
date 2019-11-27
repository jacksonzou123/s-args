all: main.o parse.o
	gcc -o program main.o parse.o

main.o: main.c parse.h
	gcc -c main.c

parse.o: parse.c parse.h
	gcc -c parse.c
