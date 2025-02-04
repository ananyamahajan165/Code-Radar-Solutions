#include <stdio.h>

int main() {
    int m;
    scanf("%d",&m);
    
    if (m>=90){
        printf("A\n");
    } else if(m>=80 && m<90){
        printf("B\n");
    } else if(m>=70 && m<80){
        printf("C\n");
    } else if(m>=60 && m<70){
        printf("D\n");
    } else{
        printf("F\n");
    }
    return 0;
}