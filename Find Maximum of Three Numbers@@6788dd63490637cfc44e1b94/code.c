#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        printf("%d\n",a);
    } else if (b>c){
        printf("%d\n",b);
    } else {
        printf("%d\n",c);
    }
    return 0;
}