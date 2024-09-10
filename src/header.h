#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 5
#define M 15
#define BINGO_SIZE 5

extern int src[N][M], bingo[BINGO_SIZE][BINGO_SIZE];

void Initialization(void);

void print_bingo(int count);
