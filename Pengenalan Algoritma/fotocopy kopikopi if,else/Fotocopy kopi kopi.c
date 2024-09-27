#include <stdio.h>
 
 int main (){

    printf("Fotocopy kopi kopi\n");

    int lembar,harga;

    printf("Mau beli berapa lembar?: ");
    scanf("%d", &lembar);

    if (lembar <= 100)
    {
      printf("Anda memilih %d lembar dengan harga Rp.150/lembar",lembar);
    }
    else
    {
      printf("Anda memilih %d lembar dengan harga Rp.100/lembar", lembar);
    }
     
     return 0;
 }