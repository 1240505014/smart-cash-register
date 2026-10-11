#include <stdio.h>
#include <math.h>

int main() {
    float urun_tutari, odenen_para;
    int i;
    int para_ustu_kurus;
    int toplam_kupur_sayisi = 0;
    int adet = 0;

    // Küpür ve Madeni Para Değerleri (12 elemanlı)
    int kupurler[12] = {20000, 10000, 5000, 2000, 1000, 500, 100, 50, 25, 10, 5, 1};
    
    // Küpür İsimleri (12 elemanlı)
    char *isimler[12] = {
        "200 TL Banknot", "100 TL Banknot", "50 TL Banknot", "20 TL Banknot", 
        "10 TL Banknot", "5 TL Banknot", "1 TL", 
        "50 Kurus", "25 Kurus", "10 Kurus", "5 Kurus", "1 Kurus"
    };

    printf("Urun Tutarini Giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen Parayi Giriniz (TL): ");
    scanf("%f", &odenen_para);

    if (odenen_para < urun_tutari) {
        printf("Hata: Odenen para urun tutarindan kucuk olamaz!\n");
        return 1;
    }

    para_ustu_kurus = (int)round((odenen_para - urun_tutari) * 100.0);

    printf("\n--- PARA USTU DETAYI ---\n");
    printf("Toplam Para Ustu: %.2f TL (%d Kurus)\n\n", (float)para_ustu_kurus / 100, para_ustu_kurus);

    for (i = 0; i < 12; i++) {
        if (para_ustu_kurus >= kupurler[i]) {
            adet = para_ustu_kurus / kupurler[i];
            para_ustu_kurus = para_ustu_kurus % kupurler[i];
            toplam_kupur_sayisi += adet;
            
            printf("%d adet %s\n", adet, isimler[i]);
        }
    }

    printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d adet\n", toplam_kupur_sayisi);

    return 0;
}