#include <stdio.h>

int hcf(int x, int y) { //x > y
    int i;
    if(y % x == 0) {
        return x;
    }
    for(i = x; i >= 1; i--) {
        if(y % i == 0 && x % i == 0){
            return i;
        }
    }
    return 0;
}

int main() {
    int x, y;
    scanf("%d%d", &x, &y);
    if(x > y) {
        printf("%d", hcf(x, y));
    }
    else {
        printf("%d", hcf(y, x));
    }
    return 0;
}