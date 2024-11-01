//main function untuk memulai codingan
#include <stdio.h>
#include <string.h>

int main (){
    //main kodingan untuk membuat program
    int tinggi; // interger main variable tinggi
    char jawaban [5]; //interger main variable jawaban

    do // disini menggunakan do-while untuk melakukan pengulangan program 
    {
        printf("Selamat datang, silahkan masukkan tinggi badan anak anda: ");
        scanf("%d", &tinggi);
        if (tinggi >= 90 ) //melakukan codingan if else jika tinggi badan si anak lebih dari 90cm maka anak itu harus membeli tiket, jika tidak maka anak itu tidak harus membeli tiket
        {
            printf("Anda harus membeli tiket karena tinggi badan anak anda lebih dari 90cm\n");
        }
        else
        {
            printf("tinggi badan anak anda kurang dari 90cm, anda tidak harus membeli tiket\n");
        }
        
        printf("apakah anda ingin melanjutkan? (Iya/Tidak) "); //ini codingan setelah mendapatkan jawaban dari codingan if-else
        scanf("%s", jawaban);
        
    } while (strcmp(jawaban, "tidak") != 0); //jika ketika kita menginput codingan tidak, maka kodingan akan berhenti mengulang program yang ada di bagian do
    
    return 0;
}