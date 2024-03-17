#include <stdio.h>
#include <stdio.h>
#include <stdlib.h> // Agar bisa menggunakan fungsi atoi

int main () {
    int ulang, num; // Variable untuk perulangan dan variable untuk menampung hasil konversi dari string ke integer
    char thn[4]; // Untuk menampung input pengguna

    while (ulang > 1)
    {
        printf("Masukkan Tahun : ");
        scanf("%s", &thn);

        // Konversi input pengguna dari string ke integer
        num = atoi(thn);

        // Memeriksa apakah input yang dimasukkan oleh user adalah 4 digit angka
        if (num >= 1000 && num <= 9999)
        {
            if (num%4 == 0)
            {
                printf("Tahun %d adalah tahun kabisat", num);
                break; // Loop akan berhenti jika input adalah 4 digit angka
            } else {
                printf("Tahun %d adalah tahun biasa atau bukan tahun kabisat\n", num);
            } 
        } else {
            printf("Input yang anda masukkan salah. Masukkan 4 digit angka!\n");
        }
        ulang += 1;
    }
    return 0;
}