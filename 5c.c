#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float D, x;
    printf("type a, b, c with spaces: ");
    scanf("%d%d%d", &a, &b, &c);
    D = sqrt(abs(b * b - 4 * a * c)) / (2.0 * a);
    x = b / (2.0 * a);
    printf("roots of the equation is %f+%fi, %f%fi", x, D, x, -D);
    return 0;
}