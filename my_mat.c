#include <stdio.h>
#include "my_mat.h"

void FloydWarshallAlgo(int Matrix[][SIZE]) {
    for (int i = 0; i < SIZE; i++)
    {
        for (int k = 0; k < SIZE; k++)
        {
            for (int d = 0; d < SIZE; d++)
            {
                if (Matrix[k][i] + Matrix[i][d] < Matrix[k][d])
                     Matrix[k][d] = Matrix[k][i] + Matrix[i][d];
            }
        }
    }
}

void TheMatrixValues(int Matrix[][SIZE]) {
    for (int x = 0; x < SIZE; x++)
    {
        for (int y = 0; y < SIZE; y++)
        {
            scanf("%d", &Matrix[x][y]);

            if(x != y && Matrix[x][y] == 0)
                Matrix[x][y] = INFINITY;
        }
   
    }  

    FloydWarshallAlgo(Matrix);       
}

void CheckingPathExisting(int Matrix[][SIZE], int i, int j) {
    if (i == j || Matrix[i][j] == INFINITY)
        printf("False\n");

    else
        printf("True\n");
}

void FindTheShortestPath(int Matrix[][SIZE], int a, int b) {
    if (a == b || Matrix[a][b] == INFINITY)
        printf("%d\n", -1);

    else
        printf("%d\n", Matrix[a][b]);
}