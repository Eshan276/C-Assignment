#include<stdio.h>

int main() {
    int x, y;
    printf("Type x and y with space: ");
    scanf("%d %d", &x, &y);
    x += y;
    y = x - y;
    x = x - y;
    printf("x: %d, y: %d", x, y);
    return 0;
}