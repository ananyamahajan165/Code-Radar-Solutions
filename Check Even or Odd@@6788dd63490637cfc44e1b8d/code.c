#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    scanf("%",&a);
    if (a%2==0){
        printf("Even\n");
    } else{
        printf("Odd\n");
    }
    return 0;
}