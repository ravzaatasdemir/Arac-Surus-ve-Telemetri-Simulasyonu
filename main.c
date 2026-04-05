#include <stdio.h>

int main() {
    float batarya_sicakligi;
    int sarj_yuzdesi;
    char kapi_durumu;
    int fren_pedali;

    printf("--ELEKTROMOBIL GUVENLIK KONTROLU--\n");

    printf("Batarya Sicakliigi (C):");
    scanf(" %f", &batarya_sicakligi);

    if(batarya_sicakligi < -100 || batarya_sicakligi > 200){
        printf("SONUÇ: HATA: Gecersiz sicaklik derecesi (%f) Lutfen sicaklik verilerini kontrol edin.\n", batarya_sicakligi);
        return 0;
    }

    printf("Sarj yuzdesi (%%):");
    scanf(" %d", &sarj_yuzdesi);

    if(sarj_yuzdesi < 0 || sarj_yuzdesi >100){
        printf("SONUÇ: HATA: Imkansiz sarj seviyesi (%d). Lutfen sensor verilerini kontrol edin\n", sarj_yuzdesi);
        return 0;
    }

    printf("Kapi durumu (A/K):");
    scanf(" %c", &kapi_durumu);

    if(kapi_durumu != 'A' && kapi_durumu != 'K'){
        printf("SONUÇ: HATA: Gecersiz giris. Lutfen A veya K harflerinden birini kullanin!\n");
        return 0;
    }

    printf("Fren pedali (1:Basili, 0: Basili Degil):");
    scanf(" %d", &fren_pedali);

    if(fren_pedali != 0 && fren_pedali != 1){
        printf("SONUÇ HATA: Gecersiz girs Lutfen 0 veya 1 degerlerinden birini kullanin\n");
        return 0;
    }


    if(batarya_sicakligi > 60){
        printf("SONUÇ: KRITIK HATA: Motor Asiri Isindi!Surus Engellendi.\n");
    }else if(sarj_yuzdesi < 10){
        printf("SONUÇ: UYARI: Batarya Kritik Seviyede! Surus Baslatilamaz.\n");
    }else if(kapi_durumu == 'A'){
        printf("SONUÇ: HATA: Kapilar Acik! Lütfen Kapatiniz.\n");
    }else if(fren_pedali == 0){
        printf("SONUÇ: BILGI: Güvenlik için frene basarak tekrar deneyin.\n");
    }else{
        printf("SONUÇ: BASARILI: SISTEM HAZIR. MOTOR BASLATILIYOR...\n");
    }
    return 0;
}