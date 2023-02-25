#include<stdio.h>

int main() {
    int b, c;
    float r;
    printf("Type b and c with spaces");
    scanf("%d %d", &b, &c);
    r = -c / (b * 1.0);
    printf("Root is %f", r);
    return 0;
}