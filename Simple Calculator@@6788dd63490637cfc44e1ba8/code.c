#include <stdio.h>

int main() {
    int a,b;
    char operator;
    scanf("%d %d %c",&a,&b,&operator);
    switch (operator){
        case'+':
            printf("%d\n",a+b);
        case '-':
            printf("%d\n",a-b);
        case'*':
            printf("%d\n",a*b);
        case'/':
            if (b!=0){
                printf("%d\n",a/b);
            } else{
                printf("error\n");
            }
            break;
        default:
            printf("error\n");
            break;

    }
    return 0;
}