// Ebob Ekok  
// Bulan Program 
// Kullanýcýdan iki sayý alýyoruz ebobunu ve ekokunu yazýyoruz
#include <stdio.h>

// main fonk baþlar
int main(void){
	int x,y;
	int obeb,okek,sayac = 1;
	printf("iki tam sayi giriniz : ");
	scanf("%d%d",&x,&y);
	// OBEB (ORTAK BÖLENLERÝN EN BÜYÜÐÜ)
	/*
		obebde iki durum söz konusu
		1-) Biri diðerinin katý olan yani tam bölünen deðerlerde sayýlardan küçük veya eþit olan (ebob) olur bu kolay olaný
		2-) Biri diðerine tam bölünmeye katý olmayan durumlarda geçerli olan yer zor olan kýsým
			2-a) ikinci kýsýmda izleyeceðimiz yol her iki sayýdan büyük olanýn yarýsýna kadar döneceðiz 
			2-b) ve her iki sayýyýda bölen en büyük ayný sayý bize (obeb)'i verecek
	*/
	// 1-)
	if(x % y == 0){
		obeb = y;
	}
	else if(y % x == 0){
		obeb = x;
	}else{
		// 2-)
		if(x >= y){
			for(int i=1;i <= (x/2)+1;i++){
				if(x % i == 0 && y % i == 0){
					obeb = i;
				}
			}
		}
		else{
			for(int i = 1;i <= (y/2)+1;i++){
				if(x % i == 0 && y % i == 0){
					obeb = i;
				}
			}
		}
	}
	// OKEK (ORTAK KATLARIN EN KÜÇÜÐÜ)
	/* 
		Ekoktada iþler biraz daha kolay yapmamýz gereken þey
		1-) Girilen iki sayýyýda tam bölen ilk sayý o iki sayýnýn okekidir.
	*/
	// sonsuz döngü
	while(true){
		if(sayac % x == 0 && sayac % y == 0){
			okek = sayac;
			break;
		}
		sayac++;
	}
	printf("Obeb : %d\nOkek : %d",obeb,okek);
	
	
	
	
	
	
	
	
}// main fonk biter
