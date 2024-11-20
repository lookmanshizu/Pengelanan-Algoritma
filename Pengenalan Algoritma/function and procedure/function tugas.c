#include <stdio.h>

int perkalian(int a, int b) {
    int kali = a * b;
    return kali;
}

int penjumlahan(int a, int b) {
    int tambah = a + b;
    return tambah;
}

int main() {
    int result, number1, number2;

    printf("Enter First Number : ");
    scanf("%d", &number1);

    printf("Enter Second Number : ");
    scanf("%d", &number2);

    result = perkalian(number1, number2);
    printf("\nHasil Perkalian : %d", result);

    result = penjumlahan(number1, number2);
    printf("\nPenjumlahan : %d", result);


    return 0;
}
