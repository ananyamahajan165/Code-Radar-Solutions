#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int year;
    scanf("%d",&year);
    if (year%4==0 && year%100!=0){
        printf("Leap year\n");
    } else{
        printf("Not a leap Year\n");
    }
    return 0;
}