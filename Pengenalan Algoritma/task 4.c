#include <stdio.h>

int main() {
    printf("Fotokopi KopiKopi\n");

    int jumlah_lembar,uang,harga,kembalian;
    
    printf("Masukkan Jumlah Lembar: ");
    scanf("%d", &jumlah_lembar);

    printf("Masukkan Uang: ");
    scanf("%d", &uang);
    
    harga=jumlah_lembar*150;

    printf("Ini Harganya: %d\n",harga);

    kembalian=uang-harga;

    printf("kembalian: %d\n",kembalian);

    return 0;
}
