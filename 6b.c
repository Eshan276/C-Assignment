#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);
    switch(marks / 10) {
        case 10:
        case 9:
            printf("O");
            break;
        case 8:
            printf("E");
            break;
        case 7:
            printf("A");
            break;
        case 6:
            printf("B");
            break;
        case 5:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        default:
            printf("F");
            break;
    }
    return 0;
}