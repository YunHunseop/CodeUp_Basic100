#include <stdio.h>

int main(void) {
    int n, sum=0;
    scanf("%d", &n);
    
    for(int i=1;i<=n;i++){
        if(i%3==0) continue;
        printf("%d ",i);
    }
	return 0;
}
