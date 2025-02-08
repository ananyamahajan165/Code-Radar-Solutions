#include <stdio.h>

int main() {
    int N,a,sum;
    scanf("%d",&N,&sum);
    for(i=1;i<=N;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    
    return 0;
}