# Makefile dynamic

binary: UserInterface.o libtour.so
	g++ -o binary UserInterface.o -L. -ltour -W1,--rpath,.
UserInterface.o: UserInterface.cpp
	g++ -c UserInterface.cpp
libtour.so: Database.o Tour_Agency.o
	g++ -shared -o libtour.so Database.o Tour_Agency.o
Database.o: Database.cpp
	g++ -c Database.cpp
Tour_Agency.o: Tour_Agency.cpp
	g++ -c Tour_Agency.cpp
clean:
	rm -f *.o *.so binary
