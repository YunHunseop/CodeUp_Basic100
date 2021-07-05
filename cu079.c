#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char n;
    do{
    scanf("%c ", &n);
    printf("%c\n", n);
    }while(n!='q');
    
    return 0;
}