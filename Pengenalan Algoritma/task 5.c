#include <stdio.h>

int main(){

    printf("Fotokopi KopiKopi");
    
    int jumlah_lembar;
    int uang;
    int harga;
    int kembalian;

    printf("Input Jumlah Lembar:");
    scanf("%d",jumlah_lembar);

   // printf("Input Uangnya");
    //scanf("%d",uang);

     harga=jumlah_lembar*150;
    printf("Harganya %d:",harga);
    scanf("%d",harga);
    
    printf("Ini Kembaliannya:");
    scanf("%d",kembalian);


    return 0;

}