#include <stdio.h>

int main() {
    int number = 1;
    for (int i = 1; i <= 10; i++) {
        number = i * 10;
        printf("%d ", number);
    }
    return 0;
}
