#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>
using namespace std;


TEST_CASE("Testing for Chess Pawn ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    BoardP(b, 8, 8);
    a[0] = 'p';
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'b';
    a[5] = '4';
    cout << " Testing Pawn" << endl;
    cout << "Test 1   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 4); // hod na 2 kletki iz nachala
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'b';
    a[5] = '3';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 4); // hod na 1 kletku
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '3';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka hoda po diagonali
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '3';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka hoda po diagonali
    a[1] = 'b';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'b';
    a[5] = '5';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka hoda na 3 kletki
    a[1] = 'a';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    cout << "Test 6   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka hoda esli vperedi figura
    a[1] = 'a';
    a[2] = '2';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '1';
    cout << "Test 7   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka hoda nazad
    a[1] = 'c';
    a[2] = '2';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '3';
    cout << "Test 8   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya figuri
    a[1] = 'e';
    a[2] = '2';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '3';
    cout << "Test 9   -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya figuri
    a[1] = 'd';
    a[2] = '2';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '3';
    cout << "Test 10  -   Okey" << endl;
    REQUIRE(pawn(b, 8, 8, a, 6, hod) == 5); // proverka s'edaniya figuri
}

TEST_CASE("Testing for Chess Knight ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    BoardN(b, 8, 8);
    a[0] = 'n';
    a[1] = 'b';
    a[2] = '1';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '3';
    cout << "Testing kNight -" << endl;
    cout << "Test 1   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod) == 4); // proverka hoda bukvoi �
    a[1] = 'b';
    a[2] = '1';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '3';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod) == 4); // proverka hoda bukvoi � v levo
    a[1] = 'e';
    a[2] = '1';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '2';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod)
            == 4); // proverka hoda bukvoi � v levo gorizontalno vverh
    a[1] = 'e';
    a[2] = '1';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '2';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod)
            == 4); // proverka hoda bukvoi � v pravo gorizontalno vverh
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '3';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod)
            == 4); // proverka hoda bukvoi � v pravo gorizontalno vniz
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '3';
    cout << "Test 6   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod)
            == 4); // proverka hoda bukvoi � v pravo gorizontalno vniz
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '6';
    cout << "Test 7   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod) == 5); // lozhniy hod po diagonaly
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'h';
    a[5] = '4';
    cout << "Test 8   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod) == 5); // lozhniy hod po gorizontaly
    a[1] = 'e';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'e';
    a[5] = '7';
    cout << "Test 9   -   Okey" << endl;
    REQUIRE(kNight(b, 8, 8, a, 6, hod) == 5); // lozhniy hod po vetikaly
}

TEST_CASE("Testing for Chess King ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    BoardK(b, 8, 8);
    a[0] = 'k';
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '3';
    cout << "Testing king -" << endl;
    cout << "Test 1   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 4); // proverka hoda vniz
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '5';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 4); // proverka hoda vverh
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '3';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 4); // proverka hoda po vertikaly
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'd';
    a[5] = '3';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 4); // proverka hoda po diagonaly
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '2';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 5); // proverka lozhnogo hoda
    a[1] = 'c';
    a[2] = '4';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '4';
    cout << "Test 6   -   Okey" << endl;
    REQUIRE(king(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya
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
    BoardQ(b, 8, 8);
    a[0] = 'q';
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '1';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 4); // proverka hoda po vetikali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 4); // proverka hoda po gorizontali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '4';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 5); // proverka hoda cherez figuru
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'f';
    a[5] = '7';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 4); // proverka hoda po diagonali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'd';
    a[5] = '1';
    cout << "Test 6   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 5); // proverka lozhnogo hoda
    a[1] = 'c';
    a[2] = '4';
    a[3] = 'x';
    a[4] = 'd';
    a[5] = '4';
    cout << "Test 7   -   Okey" << endl;
    REQUIRE(queen(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya
}

TEST_CASE("Testing for Chess Bishop ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    BoardB(b, 8, 8);
    a[0] = 'b';
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'f';
    a[5] = '7';
    cout << "Testing Bishop" << endl;
    cout << "Test 1   -   Okey" << endl;
    REQUIRE(bishop(b, 8, 8, a, 6, hod) == 5); // proverka hoda  cherez figuru
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '6';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(bishop(b, 8, 8, a, 6, hod) == 4); // proverka hoda po diagonali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '1';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(bishop(b, 8, 8, a, 6, hod) == 5); // proverka hoda po vertikali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(bishop(b, 8, 8, a, 6, hod) == 5); // proverka hoda po gorizontali
    a[1] = 'c';
    a[2] = '4';
    a[3] = 'x';
    a[4] = 'e';
    a[5] = '6';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(bishop(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya
}

TEST_CASE("Testing for Chess Rook ", "[Chess]")
{
    int hod = 2;
    char board[8][8];
    char a[6];
    char* b[8];
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    BoardR(b, 8, 8);
    a[0] = 'r';
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'c';
    a[5] = '1';
    cout << "Testing Rook" << endl;
    cout << "Test 1   -   Okey" << endl;
    REQUIRE(rook(b, 8, 8, a, 6, hod) == 4); // proverka hoda po vertikali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'a';
    a[5] = '4';
    cout << "Test 2   -   Okey" << endl;
    REQUIRE(rook(b, 8, 8, a, 6, hod) == 4); // proverka hoda po gorizontali
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'g';
    a[5] = '4';
    cout << "Test 3   -   Okey" << endl;
    REQUIRE(rook(b, 8, 8, a, 6, hod) == 5); // proverka hoda cherez figuru
    a[1] = 'c';
    a[2] = '4';
    a[3] = '-';
    a[4] = 'f';
    a[5] = '7';
    cout << "Test 4   -   Okey" << endl;
    REQUIRE(rook(b, 8, 8, a, 6, hod) == 5); // proverka hoda po diagonali
    a[1] = 'c';
    a[2] = '4';
    a[3] = 'x';
    a[4] = 'e';
    a[5] = '4';
    cout << "Test 5   -   Okey" << endl;
    REQUIRE(rook(b, 8, 8, a, 6, hod) == 4); // proverka s'edaniya
}
