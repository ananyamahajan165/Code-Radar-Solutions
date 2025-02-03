#include <stdio.h>
int main() {
    float number;
    printf("enter a floating point number: ");
    scanf("%f, &number");

    printf("You entered:\n%.2f\n", number);

    return 0;
}