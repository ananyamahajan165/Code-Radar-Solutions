#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1, n2;
    scanf("%d %d", &n1,&n2);
    if (n1>0 && n2<0) || (n1==0 && n2==0){
        printf("True\n");
    } else{
        printf("False\n");
    }
    return 0;
}