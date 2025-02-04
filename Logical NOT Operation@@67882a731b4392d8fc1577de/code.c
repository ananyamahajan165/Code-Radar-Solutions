#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1;
    scanf("%d",&n1);
    if (!(n1>0)){
        printf("True\n");
    } else{
        printf("False\n");
    }
    return 0;
}