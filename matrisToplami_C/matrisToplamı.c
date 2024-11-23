#include <stdio.h>

int main() {
    int i, j;
    int satir, sutun;

    // Matrislerin boyutunu kullanýcýdan al
    printf("Matrisin satir sayisini girin: ");
    scanf("%d", &satir);
    printf("Matrisin sutun sayisini girin: ");
    scanf("%d", &sutun);

    // Matrisleri tanýmla
    int matris1[satir][sutun], matris2[satir][sutun], toplam[satir][sutun];

    // Birinci matrisin elemanlarýný al
    printf("Birinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("Matris1[%d][%d]: ", i+1, j+1);
            scanf("%d", &matris1[i][j]);
        }
    }

    // Ýkinci matrisin elemanlarýný al
    printf("Ikinci matrisin elemanlarini girin:\n");
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("Matris2[%d][%d]: ", i+1, j+1);
            scanf("%d", &matris2[i][j]);
        }
    }

    // Matrislerin toplamýný hesapla
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            toplam[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    // Sonucu yazdýr
    printf("Matrislerin toplami:\n");
    for (i = 0; i < satir; i++) {
        for (j = 0; j < sutun; j++) {
            printf("%d ", toplam[i][j]);
        }
        printf("\n");
    }

    return 0;
}

