#include <stdio.h>
#include <stdbool.h>

int main()
{
    int n, i;
    scanf("%d", &n);
    bool isPrime = true;
    if (n != 2)
    {
        for (i = 2; i <= n / 2; i++)
        {
            if (n % i == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    if (isPrime)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }
    return 0;
}