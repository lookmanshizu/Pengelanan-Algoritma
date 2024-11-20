#include <stdio.h>

int addTwoNumber(int a, int b) {
    int addition = a + b;
    printf("\nThe result is : %d", addition);
}

int main() {
    int result, number1, number2;

    printf("Enter First Number : ");
    scanf("%d", &number1);

    printf("Enter Second Number : ");
    scanf("%d", &number2);

    addTwoNumber(number1, number2);
    printf("\nFinished");

    return 0;
}
