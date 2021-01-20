//
// Kullanýcýdan iki sayý isteyelim ve 4 iþlem yapalým
#include <stdio.h>

// main fonk baþlar
int main(void){
	
	int num1,num2,toplama,cikarma,carpma,bolme;
	printf("iki tam sayi girin : ");
	scanf("%d%d",&num1,&num2);// kullanýcýdan iki tam sayý alýyoruz
	toplama = num1 + num2;// toplama iþlemi
	cikarma = num1 - num2;// cikarma islemi
	carpma  = num1 * num2;// carpma islemi
	bolme   = num1 / num2;// tam sayý bölmesi
	printf("Toplama : %d\n",toplama);
	printf("Cikarma : %d\n",cikarma);
	printf("Carpma  : %d\n",carpma);
	printf("Bolme   : %d\n",bolme);
	
}// main fonk biter

