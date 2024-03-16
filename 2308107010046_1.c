#include <stdio.h>

int main() {
    int pilih, bilangan, desimal, biner = 0, oktal = 0, basis = 1, digit;

    printf("Pilih Metode Konversi:\n1. Desimal ke Biner\n2. Biner ke Desimal\n3. Desimal ke Oktal\n4. Oktal ke Desimal\nPilih: ");
    scanf("%d", &pilih);

    switch (pilih) {
        case 1:
            printf("Masukkan bilangan Desimal: ");
            scanf("%d", &bilangan);
            desimal = bilangan;
            while (bilangan > 0) {
                digit = bilangan % 2;
                biner += digit * basis;
                bilangan /= 2;
                basis *= 10;
            }
            printf("Hasil konversi ke Biner adalah : %d\n", biner);
            break;
        
        case 2:
            printf("Masukkan bilangan Biner: ");
            scanf("%d", &bilangan);
            basis = 1;
            while (bilangan > 0) {
                digit = bilangan % 10;
                if (digit != 0 && digit != 1) {
                    printf("Bilangan bukan biner!\n");
                    return 1;
                }
                desimal += digit * basis;
                bilangan /= 10;
                basis *= 2;
            }
            printf("Hasil konversi ke Desimal: %d\n", desimal);
            break;
        
        case 3:
            printf("Masukkan bilangan Desimal: ");
            scanf("%d", &bilangan);
            desimal = bilangan;
            basis = 1;
            while (bilangan > 0) {
                digit = bilangan % 8;
                oktal += digit * basis;
                bilangan /= 8;
                basis *= 10;
            }
            printf("Hasil konversi ke Oktal : %d\n", oktal);
            break;
        
        case 4:
            printf("Masukkan bilangan Oktal: ");
            scanf("%d", &bilangan);
            basis = 1;
            while (bilangan > 0) {
                digit = bilangan % 10;
                if (digit >= 8) {
                    printf("Bilangan bukan Oktal!\n");
                    return 1;
                }
                desimal += digit * basis;
                bilangan /= 10;
                basis *= 8;
            }
            printf("Hasil konversi ke Desimal : %d\n", desimal);
            break;

        default:
            printf("Pilihan tidak tersedia!\n");
            return 1;
    }

    return 0;
}
