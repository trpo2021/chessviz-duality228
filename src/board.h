#ifndef BOARD_H
#define BOARD_H
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void Board(char* ptr[], int n, int m);
void pBoard(char* ptr[], int n, int m);
int Pawn(char* ptr[], int n, int m, char a[]);
int pawn(char* ptr[], int n, int m, char a[]);
int rook(char* ptr[], int n, int m, char* a, int hod);
int queen(char* ptr[], int n, int m, char* a, int hod);
int kNight(char* ptr[], int n, int m, char a[], int hod);
int bishop(char* ptr[], int n, int m, char a[], int hod);
int king(char* ptr[], int n, int m, char a[], int hod);
#endif
