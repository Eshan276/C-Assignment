#include <stdio.h>

int main() {
    int n;
    float sum = 0.0f;
    
    printf("Enter the value of n: ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++) {
        sum += 1.0 / i;
    }
    
    printf("The sum of the series is %f", sum);
    
    return 0;
}