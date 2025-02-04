#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if (a==0){
        printf("Inavlid\n");
    } if (a%2==0){
        printf("Even\n");
    } else{
        printf("Odd\n");
    }
    
    return 0;
}