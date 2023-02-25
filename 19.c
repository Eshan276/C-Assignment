#include <stdio.h>

int main()
{
    int large, i, j;
    int matrix[5][5] = {
        {17, 18, 19, 20, 26},
        {21, 22, 23, 24, 27},
        {25, 10, 11, 12, 28},
        {30, 31, 32, 33, 34},
        {13, 14, 15, 16, 29}};

    large = matrix[0][0];
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if(large < matrix[i][j]) {
                large = matrix[i][j];
            }
        }
    }
    printf("%d", large);
    return 0;
}