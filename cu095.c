#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n, input, j = 1;
    int arr[1000] = {0,};
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &input);
        
        if (i==0) {
            arr[0] = input;
        }
        else {
            if (input < arr[i - 1]) {
                arr[i] = input;
            }
            else {
                arr[i] = arr[i - 1];
                arr[i - 1] = input;
            }
        }
        
    }

        printf("%d ", arr[n-1]);

    return 0;
}