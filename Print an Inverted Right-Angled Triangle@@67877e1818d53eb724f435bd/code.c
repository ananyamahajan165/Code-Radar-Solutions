#include <stdio.h>
int main(){
    int i,j,n;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;i<=j;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
    
}