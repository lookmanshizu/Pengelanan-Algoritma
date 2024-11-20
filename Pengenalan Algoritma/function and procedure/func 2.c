#include <stdio.h>

int addTwoNumber(int a, int b) {
    int addition = a + b;
    return addition;
}

int main() {
    int result, number1, number2;

    printf("Enter First Number : ");
    scanf("%d", &number1);

    printf("Enter Second Number : ");
    scanf("%d", &number2);

    result = addTwoNumber(number1, number2);
    printf("\nThe result is : %d", result);

    result = addTwoNumber(10, 100);
    printf("\nThe result is : %d", result);

    return 0;
}
