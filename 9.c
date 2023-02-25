#include <stdio.h>
#include<math.h>

int main() {
    int x, y;
    long l;
    printf("type x and y with spaces: ");
    scanf("%d%d", &x, &y);
    l = pow(x, y);
    printf("%lli", l);
    return 0;
}