#include <stdio.h>

int main()
{
    int i, j;
    int matrix[4][4] = {
        {17, 18, 19, 20},
        {21, 22, 23, 24},
        {25, 10, 11, 12},
        {13, 14, 15, 16}};

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}