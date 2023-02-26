#include <stdio.h>

int fab(int n) {
    if(n < 2) {
        return 1;
    }
    return fab(n-1)+fab(n-2);
}

int main() {
    int i, x;
    scanf("%d", &x);
    for(i = 0; i < x; i++) {
        printf("%d\t", fab(i));
    }
    
    return 0;
}