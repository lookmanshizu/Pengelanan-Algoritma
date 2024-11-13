#include <stdio.h>

int main() {
    int choice;
    char name[30];

    puts("Enter a string: ");
    gets(name);
    printf("You entered %s \n", name);

    printf("Menu:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            puts("Enter two numbers: ");
            int a, b;
            scanf("%d %d", &a, &b);
            printf("Sum = %d\n", a + b);
            break;
        case 2:
            puts("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Difference = %d\n", a - b);
            break;
        case 3:
            puts("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Product = %d\n", a * b);
            break;
        case 4:
            puts("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Quotient = %d\n", a / b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
