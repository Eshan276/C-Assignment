#include<stdio.h>

int main() {
    int year;
    printf("Type Year: ");
    scanf("%d", &year);
    if (year % 4 != 0) {
        printf("No, %d is not a leap year\n", year);
    } else if (year % 100 != 0) {
        printf("Yes, %d is a leap year\n", year);
    } else if (year % 400 != 0) {
        printf("No, %d is not a leap year\n", year);
    } else {
        printf("Yes, %d is a leap year\n", year);
    }
    return 0;
}