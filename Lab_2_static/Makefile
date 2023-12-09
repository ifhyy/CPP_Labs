# Makefile static

binary: UserInterface.o libtour.a
	g++ -o binary UserInterface.o -L. -ltour
UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp
libtour.a: Database.o Tour_Agency.o
	ar cr libtour.a Database.o Tour_Agency.o
Database.o: Database.cpp
	g++ -c Database.cpp
Tour_Agency.o: Tour_Agency.cpp
	g++ -c Tour_Agency.cpp
clean:
	rm -f *.o *.a binary
