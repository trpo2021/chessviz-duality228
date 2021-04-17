CFLAGS = -Wall -Werror -Wextra
OBJ = g++ $(CFLAGS) -c $< -o $@

.PHONY: clean

all:folder folder2 bin/chess.exe bin/test

folder:
	mkdir -p build 

folder2:
	mkdir -p bin 

bin/chess.exe: build/main.o build/board_print_plain.o build/board.o 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp src/board.h 
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.cpp src/board.h
	$(OBJ)

build/board.o: src/board.cpp src/board.h
	$(OBJ)


clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin



