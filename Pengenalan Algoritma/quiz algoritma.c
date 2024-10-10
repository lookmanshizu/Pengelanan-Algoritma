#include <stdio.h>

int main() {
    float rata_ujian, nilai_bahasa_inggris;
    int lulus_tes_potensi_akademik;

    printf("Masukkan nilai rata-rata ujian masuk: ");
    scanf("%f", &rata_ujian);
    
    printf("Masukkan nilai ujian Bahasa Inggris: ");
    scanf("%f", &nilai_bahasa_inggris);
    
    printf("Apakah lulus tes potensi akademik? (1 = Ya, 0 = Tidak): ");
    scanf("%d", &lulus_tes_potensi_akademik);

    if (rata_ujian >= 80 && nilai_bahasa_inggris >= 70 && lulus_tes_potensi_akademik == 1) {
        printf("Selamat, Anda diterima!\n");
    } else {
        printf("Maaf, Anda belum memenuhi syarat penerimaan.\n");
    }

    return 0;
}