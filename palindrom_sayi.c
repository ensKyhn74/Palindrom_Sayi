#include <stdio.h>
// klavyeden girilen sayı Palindrom Sayı mı değil mi? 
// tüm rakamlar palindrom sayıdır.
// 11,22,33,...,88,99 palindrom sayıdır.
// 111,121,252,525,1001 gibi sayılar palindromdur.

int main()

{ 
    
 int kalan;
 int sayi,geciciSayi;
 int toplam = 0;
  
 printf("bir sayi girin: ");    
 scanf("%d",&sayi); // 252 olsun
 
 geciciSayi = sayi;
 
 while(sayi != 0)
 {                                 // 1.ADIM                // 2.ADIM            // 3.ADIM  
  kalan = sayi % 10;              // kalan=2                kalan=5              kalan=2 (2%10)
  toplam = toplam * 10 + kalan;   // toplam=0*10+2=2        toplam=2*10+5=25     toplam=25*10+2=252
  sayi /= 10;                     // sayi=25                sayi=2               sayi=0 (2/10)
 }
 
 if(toplam == geciciSayi)
 {
   printf("%d palindrom sayidir.",geciciSayi);
 }
 
 else
 {
   printf("%d palindrom sayi degildir.",geciciSayi);   
 }

 return 0;
  
}