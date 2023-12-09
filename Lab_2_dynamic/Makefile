# Makefile dynamic

binary: UserInterface.o libtour.so
	g++ -o binary UserInterface.o -L. -ltour -Wl,--rpath,.
UserInterface.o: UserInterface.cpp
	g++ -c -fPIC UserInterface.cpp
libtour.so: Database.o Tour_Agency.o
	g++ -shared -o libtour.so Database.o Tour_Agency.o
Database.o: Database.cpp
	g++ -c -fPIC Database.cpp
Tour_Agency.o: Tour_Agency.cpp
	g++ -c -fPIC Tour_Agency.cpp
clean:
	rm -f *.o *.so binary
