#include <stdio.h>
#define satir 3
#define sutun 4

int altDizi(int dizi[satir][sutun], int hedef) {
    int altDiziSayisi = 0;
    int satirBaslangic,sutunBaslangic,i,j,satirBitis,sutunBitis;
    for (satirBaslangic = 0; satirBaslangic < satir; satirBaslangic++) {
        for (sutunBaslangic = 0; sutunBaslangic < sutun; sutunBaslangic++) {
            for (satirBitis = satirBaslangic; satirBitis < satir; satirBitis++) {
                for (sutunBitis = sutunBaslangic; sutunBitis < sutun; sutunBitis++) {
                    int toplam = 0;
                    for (i = satirBaslangic; i <= satirBitis; i++) {
                        for (j = sutunBaslangic; j <= sutunBitis; j++) {
                            toplam += dizi[i][j];
                        }
                    }
                    if (toplam == hedef) {
                        altDiziSayisi++;
                    }
                }
            }
        }
    }
    return altDiziSayisi;
}

int main() {
    int dizi[satir][sutun] = {{1,7,4,8}, {4,14,6,4}, {5,12,9,11}};
    int hedef = 20;
    printf("Toplami %d olan alt matrislerin sayisi: %d", hedef, altDizi(dizi, hedef));
    return 0;
}

