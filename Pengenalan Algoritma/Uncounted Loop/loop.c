#include <stdio.h>

int main() {
    int number = 1;

    while (number != 0) {
        printf("Enter numbers (enter 0 to stop): ");
        scanf("%d", &number);
        printf("You entered: %d\n", number);
    }

    printf("Finished");

    return 0;
}
