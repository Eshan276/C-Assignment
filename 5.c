#include<stdio.h>
#include<math.h>

int main() {
    int a, b, c;
    float D, r1, r2;
    printf("type a, b, c with spaces: ");
    scanf("%d%d%d", &a, &b, &c);
    D = sqrt(b * b - 4 * a * c);
    r1 = (b * (-1) - D) / (2.0 * a);
    r2 = (b * (-1) + D) / (2.0 * a);
    printf("roots of the equation is %f, %f", r1, r2);
    return 0;
}