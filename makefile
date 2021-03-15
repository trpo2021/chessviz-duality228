output: main.o
	gcc main.o -o output

main.o: main.cpp
	g++ -Wall -Werror -c main.cpp

clean:
	rm *.o output