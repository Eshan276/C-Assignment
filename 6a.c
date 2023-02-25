#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    if(100 >= marks && marks >= 90) {
        printf("O");
    }
    else if(89 >= marks && marks >= 80) {
        printf("E");
    }
    else if(79 >= marks && marks >= 70) {
        printf("A");
    }
    else if(69 >= marks && marks >= 60) {
        printf("B");
    }
    else if(59 >= marks && marks >= 50) {
        printf("C");
    }
    else if(49 >= marks && marks >= 40) {
        printf("D");
    }
    else {
        printf("F");
    }
    return 0;
}