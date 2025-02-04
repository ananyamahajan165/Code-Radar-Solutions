#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char ch;
    scanf("%c",&ch);
    if (ch>='A' && ch<='Z'){
        printf("Uppercase\n");
    } else if (ch>='a' && ch<='z'){
        printf("Lowercase\n");
    } else{
        printf("Not an alphabet\n");
    }
    return 0;
}