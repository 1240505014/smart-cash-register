# Akıllı Kasa (Smart Cash Register) Proje Raporu

## 1. Programın Amacı
Bu proje; bir alışveriş işleminde girilen ürün tutarı ile ödenen para arasındaki farkı hesaplayarak, müşteriye verilecek para üstünü en az sayıda banknot ve madeni para (küpür) kullanarak optimize eden bir akıllı kasa simülasyonudur.

## 2. Geliştirme Süreci ve Kullanılan Araçlar
* **Kodlama Ortamı:** VS Code (Visual Studio Code) metin düzenleyicisi kullanılmıştır.
* **Derleyici ve Dil Standardı:** Windows işletim sisteminde eski tip döngü kapsamı (variable scope) uyumsuzluklarını önlemek ve kararlı bir yapı sağlamak amacıyla `-std=c99` bayrağı ile GCC derleyicisi tercih edilmiştir.
* **Sürüm Kontrolü:** Proje dosyaları versiyon kontrolü için GitHub platformuna yüklenmiştir.

## 3. Algoritma ve Teknik Detaylar
* **Greedy (Açgözlü) Algoritma:** En büyük küpürden başlanarak para üstü miktarından düşme mantığıyla çalışır. Böylece en az sayıda parça ile para üstü tamamlanır.
* **Kuruş Dönüşümü:** Ondalıklı sayı (`float`) hesaplamalarında yaşanabilecek hassasiyet kayıplarını önlemek için tutarlar $100$ ile çarpılarak `int` (kuruş) cinsine dönüştürülmüş ve `math.h` kütüphanesindeki `round()` fonksiyonu ile güvenli yuvarlama yapılmıştır.
