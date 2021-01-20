//
// Toplama Programý
# include <stdio.h>

// main fonk baþlar
int main(void){
	int integer1;//kullanýcýdan alýnan ilk deðiþken
	int integer2;//kullaýcýdan alýnan ikinci deðiþken
	int sum;// girilen deðerlerin toplamýný tutan deðiþken
	
	printf("Birinci Sayi : ");
	scanf("%d",&integer1);
	
	printf("Ikinci Sayi : ");
	scanf("%d",&integer2);
	
	sum = integer1+integer2;
	printf("Sayilarin Toplami : %d",sum);
}// main fonk biter
