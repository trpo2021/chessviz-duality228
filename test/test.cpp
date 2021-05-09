#define CATCH_CONFIG_MAIN
#include "board.h"
#include "catch.hpp"
#include <iostream>
using namespace std;

TEST_CASE("Testing for Chess Pawn ", "[Chess]")
{
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
    a[0] = 'p';
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'b';
    a[5] = '4';
    REQUIRE(pawn(b, 8, 8, a) == 4); // hod na 2 kletki iz nachala
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '3';
    REQUIRE(pawn(b, 8, 8, a) == 5); // proverka hoda po diagonali
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '3';
    REQUIRE(pawn(b, 8, 8, a) == 5); // proverka hoda po diagonali
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'b';
    a[5] = '5';
    REQUIRE(pawn(b, 8, 8, a) == 5); // proverka hoda na 3 kletki
    a[1] = 'a';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '1';
    REQUIRE(pawn(b, 8, 8, a) == 5); // proverka hoda nazad
    a[1] = 'd';
    a[2] = '2';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '3';
    REQUIRE(pawn(b, 8, 8, a) == 5); // proverka s'edaniya figuri
}
TEST_CASE("Testing for Chess Knight ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
    a[0] = 'n';
    a[1] = 'b';
    a[2] = '1';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '3';
    REQUIRE(kNight(b, 8, 8, a, hod) == 4); // proverka hoda bukvoi �
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '6';
    REQUIRE(kNight(b, 8, 8, a, hod) == 5); // lozhniy hod po diagonaly
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'h';
    a[5] = '4';
    REQUIRE(kNight(b, 8, 8, a, hod) == 5); // lozhniy hod po gorizontaly
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'e';
    a[5] = '7';
    REQUIRE(kNight(b, 8, 8, a, hod) == 5); // lozhniy hod po vetikaly
}
TEST_CASE("Testing for Chess King ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '2';
    REQUIRE(king(b, 8, 8, a, hod) == 5); // proverka lozhnogo hoda
}
TEST_CASE("Testing for Chess Queen ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    cout << "Testing Queen -" << endl;
    cout << "Test 1   -   Okey" << endl << endl;
    Board(b, 8, 8);
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    REQUIRE(queen(b, 8, 8, a, hod) == 4); // proverka hoda po gorizontali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'd';
    a[5] = '1';
    REQUIRE(queen(b, 8, 8, a, hod) == 5); // proverka lozhnogo hoda
}
TEST_CASE("Testing for Chess Bishop ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
    a[0] = 'b';
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'f';
    a[5] = '7';
    REQUIRE(bishop(b, 8, 8, a, hod) == 5); // proverka hoda  cherez figuru
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '1';
    REQUIRE(bishop(b, 8, 8, a, hod) == 5); // proverka hoda po vertikali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    REQUIRE(bishop(b, 8, 8, a, hod) == 5); // proverka hoda po gorizontali
}
TEST_CASE("Testing for Chess Rook ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '4';
    REQUIRE(rook(b, 8, 8, a, hod) == 5); // proverka hoda cherez figuru
}
