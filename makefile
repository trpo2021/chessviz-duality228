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
	ar rcs build/board.a  build/board.o

bin/test.exe: build/test.o build/board.a build/board_print_plain.o
	g++ -Wall -Werror -o build/test.o build/board_print_plain.o build/board.a

build/test.o: test/test.cpp src/board.h
	g++ -Wall -Werror -c test/test.cpp src/board.h -o build/test.o -I thirdparty

-include board.d board_print_plain.d test.d

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
