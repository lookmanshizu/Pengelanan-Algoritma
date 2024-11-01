#include <stdio.h>
#include <string.h>

int main() {
    char answer[3];
    int number1, number2, result;

    do {
        number1 = 10;
        number2 = 100;
        result = number1 + number2;
        printf("result: %d\n", result);

        printf("Do you want to continue? (yes/no): ");
        scanf("%s", answer);

    } while (strcmp(answer, "no") != 0);

    return 0;
}
