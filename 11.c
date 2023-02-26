#include <stdio.h>
#include<math.h>

int factorial(int n) {
    if(n < 2) {
        return 1;
    }
    return n*factorial(n-1);
}

float val(int n) {
    return (1.0 * pow(-1, n+1)) / factorial(2 * n + 1);
}

float series(int n) {
    if(--n == 0) {
        return -1.0;
    }
    return val(n) + val(n-1);
}

int main() {
    int n = 2;
    printf("The sum of the series up to %d terms is %f.\n", n, series(n));
    return 0;
}