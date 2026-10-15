#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Her kupur icin: adet hesapla, kalani guncelle, toplami artir, yazdir */
#define HESAPLA(deger, isim)                          \
    adet = para_ustu_kurus / (deger);                 \
    para_ustu_kurus = para_ustu_kurus % (deger);      \
    toplam_kupur_sayisi += adet;                      \
    printf("%d adet %s\n", adet, isim);

int main() {
    float urun_tutari, odenen_para;
    int para_ustu_kurus;
    int toplam_kupur_sayisi = 0;
    int adet = 0;

    printf("Urun Tutarini Giriniz (TL): ");
    scanf("%f", &urun_tutari);

    printf("Odenen Parayi Giriniz (TL): ");
    scanf("%f", &odenen_para);

    /* if kullanmadan hata kontrolu: kisa devre (short-circuit) mantigi */
    (odenen_para >= urun_tutari) ||
        (printf("Hata: Odenen para urun tutarindan kucuk olamaz!\n"), exit(1), 0);

    para_ustu_kurus = (int)round((odenen_para - urun_tutari) * 100.0);

    printf("\n--- PARA USTU DETAYI ---\n");
    printf("Toplam Para Ustu: %.2f TL (%d Kurus)\n\n",
           (float)para_ustu_kurus / 100, para_ustu_kurus);

    HESAPLA(20000, "200 TL Banknot")
    HESAPLA(10000, "100 TL Banknot")
    HESAPLA(5000,  "50 TL Banknot")
    HESAPLA(2000,  "20 TL Banknot")
    HESAPLA(1000,  "10 TL Banknot")
    HESAPLA(500,   "5 TL Banknot")
    HESAPLA(100,   "1 TL")
    HESAPLA(50,    "50 Kurus")
    HESAPLA(25,    "25 Kurus")
    HESAPLA(10,    "10 Kurus")
    HESAPLA(5,     "5 Kurus")
    HESAPLA(1,     "1 Kurus")

    printf("\nVerilen Toplam Kupur/Madeni Para Sayisi: %d adet\n", toplam_kupur_sayisi);

    return 0;
}
