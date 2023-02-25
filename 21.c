#include <stdio.h>

int main() {
    int len, i, j;
    int arr[] = {0, 0, 0, 0, 0};
    len = sizeof(arr)/sizeof(arr[0]);
    for(i = 0; i < len; i++) {
        arr[i] = 1;
        for(j = 0; j < len; j++) {
            printf("%d", arr[j]);
        }
        arr[i] = 0;
        printf("\n");
    }
    return 0;
}