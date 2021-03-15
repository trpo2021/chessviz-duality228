#include <iostream>
using namespace std;

enum{
    board_wide = 8,
    board_length = 8
};

enum{
    pawnw = 'P', empty = ' ', rookw = 'R', knightw = 'N', bishopw = 'B', queenw = 'Q', kingw = 'K',
    pawnb = 'p', rookb = 'r', knightb = 'n', bishopb = 'b', queenb = 'q', kingb = 'k'
};

int main()
{
    char matr[board_wide][board_length];
    for(int i=0; i<8; i++)
    {
        for(int j=0; j<8; j++)
        {
            if(i < 2) matr[i][j] = pawnw;
            if(i > 5) matr[i][j] = pawnb;
            if(i > 1 && i < 6) matr[i][j] = empty;
        }
    }
    matr[0][0] = rookw;
    matr[0][1] = knightw;
    matr[0][2] = bishopw;
    matr[0][3] = queenw;
    matr[0][4] = kingw;
    matr[0][5] = bishopw;
    matr[0][6] = knightw;
    matr[0][7] = rookw;
    matr[7][0] = rookb;
    matr[7][1] = knightb;
    matr[7][2] = bishopb;
    matr[7][3] = queenb;
    matr[7][4] = kingb;
    matr[7][5] = bishopb;
    matr[7][6] = knightb;
    matr[7][7] = rookb;

    for(int i=0; i<8; i++)
    {
        cout<< "|";
        for(int j=0; j<8; j++)
        {
            cout << matr[i][j] << "|";
        }
        cout << "\n";
    }
    system("PAUSE");
    return 0;
}