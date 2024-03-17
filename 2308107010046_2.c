#include <stdio.h>
#include <stdlib.h>

int main () {
    int ulang, num;
    char thn[4];

    while (ulang > 1)
    {
        printf("Masukkan Tahun : ");
        scanf("%s", &thn);

        num = atoi(thn);

        if (num >= 1000 && num <= 9999)
        {
            if (num%4 == 0)
            {
                printf("Tahun %d adalah tahun kabisat", num);
                break;
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
