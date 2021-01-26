// Kullanýcýdan alýnan sayýnýn 
// tek veya cift oldugunu söyleyen program
#include <stdio.h>

// main fonk baþlar
int main(void){
	int girilenSayi;
	printf("Bir sayi girin : ");
	scanf("%d",&girilenSayi);
	if(girilenSayi % 2 == 0){
		printf("Girilen Sayi : %d cift bir sayidir.",girilenSayi);
	}
	else{
		printf("Girilen Sayi : %d tek bir sayidir.",girilenSayi);
	}
}// main fonk biter
