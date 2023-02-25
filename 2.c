#include<stdio.h>

//c/5 = (f-32)/9

int main() {
    float celc, farh;
    printf("Type Fahrenheit Temperature: ");
    scanf("%f", &farh);
    celc = (farh - 32.0) * (5.0 / 9.0);
    printf("\nCelcius Temperature is : %f", celc);
    return 0;
}