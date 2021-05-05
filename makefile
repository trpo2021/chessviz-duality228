CFLAGS = -Wall -Werror 
OBJ = g++ $(CFLAGS) -c $< -o $@

all:folder folder2 bin/chess.exe bin/test.exe

folder:
	mkdir -p build 

folder2:
	mkdir -p bin 

.PHONY: chessiz
chessviz: bin/chessviz.exe
bin/chess.exe: build/main.o build/board_print_plain.o build/board.a 
	g++ $(CFLAGS) $^ -o $@

build/main.o: src/main.cpp
	$(OBJ)

build/board_print_plain.o: src/board_print_plain.cpp
	$(OBJ)

build/board.o: src/board.cpp
	$(OBJ)
	
build/board.a: build/board.o
	ar rcs build/board.a  build/board.o

.PHONY: test
test: bin/test.exe
bin/test.exe: build/test.o build/board.a build/board_print_plain.o
	g++ -Wall -Werror -Wextra -I src -I thirdparty -o $@ $^
build/test.o: test/test.cpp
	$(OBJ)

-include board.d board_print_plain.d test.d

.PHONY: clean

clean:
	rm build/*.o
	rm bin/*.exe
	rm -R build
	rm -R bin
