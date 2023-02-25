#include<stdio.h>

int main() {
    int day, month, year;
    printf("Type total days: ");
    scanf("%d", &day);
    year = day / 365;
    day %= 365;
    month = day / 30;
    day %= 30;
    printf("%d years, %d months %d days", year, month, day);
    return 0;
}