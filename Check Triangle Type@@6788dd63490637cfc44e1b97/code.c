#include <stdio.h>

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if (a<=0||b<=0||c<=0){
        printf("Invalid sides\n");
    } else{
        if (a==b && b==c){
            printf("Equilateral\n");
        } else if(a==b ||b==c||c==a){
            printf("Isosceles\n");
        } else {
            printf("Scalene\n")
        }
    }
    return 0;
}