#include "board.h"

extern void pBoard(char* ptr[], int n, int m);
extern void Board(char* ptr[], int n, int m);

int main()
{
    int hod = 1;
    char board[8][8];
    char a[6];
    char* b[8];
    int x;
    for (int i = 0; i < 8; i++)
        b[i] = board[i];
    Board(b, 8, 8);
while (x != 4) {
    system("clear");
    pBoard(b, 8, 8);
    if (hod % 2 != 0) {
        cout << endl << " Time Of White " << endl;
        hod++;
    } else {
        cout << endl << " Time Of Black " << endl;
        hod++;
    }
while (x != 5){
    for (int i = 0; i < 6; i++)
        cin >> a[i];
    switch (a[0]) {
    case 'p': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = pawn(b, 8, 8, a);
            break;
        }
    }
    case 'r': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = rook(b, 8, 8, a, hod);
            break;
        }
    }
    case 'b': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = bishop(b, 8, 8, a, 6);
            break;
        }
    }
    case 'k': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = king(b, 8, 8, a, 6);
            break;
        }
    }
    case 'n': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = kNight(b, 8, 8, a, 6);
            break;
        }
    }
    case 'q': {
        if (hod % 2 != 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = queen(b, 8, 8, a, hod);
            break;
        }
    }
    case 'P': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = Pawn(b, 8, 8, a);
            break;
        }
    }
    case 'R': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = rook(b, 8, 8, a, hod);
            break;
        }
    }
    case 'B': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = bishop(b, 8, 8, a, 6);
            break;
        }
    }
    case 'K': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = king(b, 8, 8, a, 6);
            break;
        }
    }
    case 'N': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = kNight(b, 8, 8, a, 6);
            break;
        }
    }
    case 'Q': {
        if (hod % 2 == 0) {
            cout << " Neverniy hod" << endl;
            x = 5;
            break;
        } else {
            x = queen(b, 8, 8, a, hod);
            break;
        }
    }
    }
}
}

    cout << endl;
    return 0;
}
