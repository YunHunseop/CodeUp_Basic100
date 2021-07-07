#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i, a, sum=0;
    scanf("%d", &a);
    for(i=1; ; i++)
    {
        sum += i;
        if(sum>=a)
    {
        break;
    }
    }
    printf("%d", sum);
    return 0;
}