// Girilen 5 basamaklý bir  sayýyý basamaklarýna 
// Ayýrýp yazdýran program

#include <stdio.h>

// main fonk baslar
int main(void){
	int sayi;
	int birlerB,onlarB,yuzlerB,binlerB,onBinlerB;
	printf("5 basamakli bir sayi girin : ");
	scanf("%d",&sayi);
	birlerB   = sayi % 10;
	onlarB    = (sayi / 10) % 10; 
	yuzlerB   = (sayi / 100) % 10;
	binlerB   = (sayi / 1000) % 10;
	onBinlerB = sayi / 10000;
	printf("Girdiginiz sayinin %d basamaklari : \n",sayi);
	printf("Birler Basamagi : %d\n",birlerB);
	printf("Onlar Basamagi : %d\n",onlarB);
	printf("Yuzler Basamagi : %d\n",yuzlerB);
	printf("Binler Basamagi : %d\n",binlerB);
	printf("OnBinler Basamagi : %d\n",onBinlerB);
	
}// main fonk biter
