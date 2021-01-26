// Vücut Kitle Ýndeksi : Kilonuzun boyunuzun karesine bölümüyle çýkan deðere göre kilolu olup olmadýðýnýzý bulur
/*
	VKÝ = kilo / (boy)*(boy)
	VKÝ < 18.5 => Zayýfsýn
	VKÝ >= 18.5 ve 24.9 => Normalsin
	VKÝ >= 25 ve 29.9 => Kilolusun
	VKÝ >= 30 => Obezsin 
*/
#include <stdio.h>

// main fonk baslar
int main(void){
	float kilo,boy;
	float indeks;
	printf("Kilonuzu Girin (ornek : 80) : ");
	scanf("%f",&kilo);
	printf("Boyunuzu Girin (ornek : 1.7) : ");
	scanf("%f",&boy);
	indeks = kilo / (boy * boy);
	if(indeks < 18.5){
		printf("Zayifsin");
	}else if(indeks >= 18.5 && indeks < 25){
		printf("Normal");
	}else if(indeks >= 25 && indeks < 30) {
		printf("Kilolusun");
	}else{
		printf("Obezsin");
	}
	
	
}// main fonk biter
