#include <stdio.h>

int main() {
    int val, i, x;
    scanf("%d", &val);
    x = 1;
    while(val) {
        x *= val;
        val--;
    }
    printf("%d", x);
    return 0;
}