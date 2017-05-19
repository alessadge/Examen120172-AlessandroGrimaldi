Main:  main.o Literatura.o Esculturas.o Obras.o Pinturas.o Disenos.o
	g++ main.o Literatura.o Esculturas.o Obras.o Pinturas.o Disenos.o -o Main

main.o: main.cpp Literatura.h Esculturas.h Obras.h Pinturas.h Disenos.h
	g++ -c main.cpp

Literatura.o: Literatura.cpp Literatura.h Obras.h
	g++ -c Literatura.cpp

Esculturas.o: Esculturas.cpp Esculturas.h Obras.h 
	g++ -c Esculturas.cpp

Obras.o: Obras.h Obras.cpp
	g++ -c Obras.cpp

Pinturas.o: Pinturas.cpp Pinturas.h Obras.h
	g++ -c Pinturas.cpp

Disenos.o: Disenos.cpp Disenos.h Obras.h
	g++ -c Disenos.cpp

clean:
	rm -f *.o *.main

