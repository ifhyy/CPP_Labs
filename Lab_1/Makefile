# Makefile for Tourist Agency Project

CC = g++
CFLAGS = -Wall -g

main: UserInterface.o Database.o Tour_Agency.o
	$(CC) $(CFLAGS) -o main UserInterface.o Database.o Tour_Agency.o

UserInterface.o: UserInterface.cpp Database.h Tour_Agency.h
	$(CC) $(CFLAGS) -c UserInterface.cpp

Database.o: Database.h

Tour_agency.o: Tour_Agency.h

clean: 
	rm -rf *.o main
