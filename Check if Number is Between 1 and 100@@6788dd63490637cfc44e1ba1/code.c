#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a<=0){
        printf("Out of Range");
    } else if(a>=100){
        printf("Out of Range");
    } else {
        printf("In Range");
    }
    
    return 0;
}