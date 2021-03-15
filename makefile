output: main.o
	gcc main.o -o output

<<<<<<< HEAD
main.o: main.cpp
	g++ -Wall -Werror -c main.cpp

clean:
	rm *.o output
=======
main.o: main.c
	gcc -Wall -Werror -c main.c

clean:
	rm *.o output
>>>>>>> c1f6a951d1d78601b43662683c8f2c776b29c3a0
