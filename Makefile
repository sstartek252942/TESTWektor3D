CPPFLAGS= -c -g -Iinc -Wall -pedantic -std=c++17 

__start__: Dron
	./Dron

Dron:  obj/main.o obj/Wektor.o obj/Wektor3D.o
	g++ -o Dron obj/main.o obj/Wektor.o obj/Wektor3D.o -lpthread

obj/main.o: src/main.cpp
	g++ ${CPPFLAGS} -o obj/main.o src/main.cpp

obj/Wektor.o: src/Wektor.cpp src/WektorC.cpp inc/Wektor.hh
	g++ ${CPPFLAGS} -o obj/Wektor.o src/WektorC.cpp

obj/Wektor3D.o: src/Wektor3D.cpp inc/Wektor3D.hh
	g++ ${CPPFLAGS} -o obj/Wektor3D.o src/Wektor3D.cpp

clear:
	rm -f obj/*.o Dron
