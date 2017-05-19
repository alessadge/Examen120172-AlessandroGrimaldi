
Main:  main.o Literatura.o Esculturas.o Obras.o Pinturas.o Diseno.o
	g++ main.o Literatura.o Esculturas.o Obras.o Pinturas.o Diseno.o -o Main

Main.o: main.cpp Literatura.h Esculturas.h Obras.h Pinturas.h
	g++ -c main.cpp

Literatura.o: Literatura.cpp Literatura.h Obras.h
	g++ -c Literatura.cpp

Esculturas.o: Esculturas.cpp Esculturas.h Obras.h 
	g++ -c Esculturas.cpp

Obras.o: Obras.cpp Obras.h 
	g++ -c Obras.cpp

Pinturas.o: Pinturas.cpp Pinturas.h Obras.h
	g++ -c Pinturas.cpp

Diseno.o: Diseno.cpp Diseno.h Obras.h
	g++ -c Diseno.cpp

clean:
	rm -f *.o *.main

