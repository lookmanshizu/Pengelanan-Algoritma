#include <stdio.h>

int main (){
    printf("Kasir Terminal Bus\n");
    
    int cm;

    printf("Silahkan masukkan tinggi badanmu: ");
    scanf("%d", &cm);

    if(cm > 90){
        printf("Tinggi kamu melebih 90cm, kamu harus membeli tiket terlebih dahulu\n");
    }
    else {
        printf("Tinggi kamu dibawah 90cm, kamu tidak perlu membeli tiket\n");
    }

    return 0;
}