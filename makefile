CFLAGS = -Wall -Werror 
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder folder2 bin/chess.exe bin/test.exe

folder:
	mkdir -p build 

folder2:
	mkdir -p bin 

bin/chess.exe: build/main.o build/board_print_plain.o build/board.a 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/board.h 
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.cpp src/board.h
	$(OBJ)

build/board.o: src/board.cpp src/board.h
	$(OBJ)
	
build/board.a: build/board.o
	ar rcs $^ $@

bin/test.exe: build/test.o
	g++ -Wall -Werror build/test.o -o bin/test.exe

build/test.o: test/test.cpp 
	g++ -Wall -Werror -c test/test.cpp -o build/test.o -I thirdparty

-include board.d

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
