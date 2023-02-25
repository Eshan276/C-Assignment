#include <stdio.h>
#include <stdbool.h>

bool prime(int n)
{
    int i;
    if (n == 2)
    {
        return true;
    }
    else
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int range, i;
    scanf("%d", &range);
    for(i = 1; i <= range; i++) {
        if(prime(i) == 1) {
            printf("%d\t", i);
        }
    }
    return 0;
}