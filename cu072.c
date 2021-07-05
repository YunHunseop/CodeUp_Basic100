#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n, cnt;
    scanf("%d", &cnt);
    
    reload:
    if(cnt--!=0){
        scanf("%d", &n);
        printf("%d\n", n);
        goto reload;
    }
    
    return 0;
}