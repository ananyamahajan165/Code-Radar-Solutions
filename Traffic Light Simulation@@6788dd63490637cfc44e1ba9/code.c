#include <stdio.h>

int main() {
    char ch;
    scanf("%c",&ch);
    switch (ch){
        case'R':
        printf("Stop\n");
        break;
        case 'G':
        printf("Go\n");
        break;
        case 'Y':
        printf("Slow Down\n");
        break;
        default:
        printf("Invalid input\n");
    }
    
    return 0;
}