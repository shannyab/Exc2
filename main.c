#include <stdio.h>
#include "my_mat.h"

int main() {
    char c;
    int t = 0;

    int Matrix[SIZE][SIZE];

    while(t != 1)
    {
        scanf("%c",&c);

        switch(c)
        {
            case 'A':
            {
                TheMatrixValues(Matrix);
                break;
            }
        
            case 'B':
            {
                int a, b;
                scanf("%d%d", &a, &b);
                CheckingPathExisting(Matrix, a, b);
                break;
            }

            case 'C':
            {
                int a,b;
                scanf("%d%d", &a, &b);
                FindTheShortestPath(Matrix, a, b);
                break;
            }

            case 'D':
            {
                t=1;
                break;
            }
        }
    }

    return 0;
}