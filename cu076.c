#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    char c; 
    char start='a';
    scanf("%c", &c);
    do{
        printf("%c ", start);
        start++;
    }while(c>=start);
    
    return 0;
}