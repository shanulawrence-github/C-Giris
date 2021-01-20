// Kullanýcýdan alýnan farklý üç deðerin
// toplamý,ortalamasý,çarpýmý,en küçük ve en büyük deðeri (sadece if ile yapma)
#include <stdio.h>

// main fonk baslar
int main(void){
	int num1,num2,num3;
	int toplam,carpim,ortalama,enBuyuk,enKucuk;
	printf("uc tam sayi giriniz : ");
	scanf("%d%d%d",&num1,&num2,&num3);// kullanýcýdan üç farklý tam sayý deðeri aldýk
	toplam    = num1 + num2 + num3;// toplama iþlemi
	carpim 	  = num1 * num2 * num3;// carpma iþlemi
	ortalama  = toplam / 3;// ortalama iþlemi
	
	/* 
		en büyük ve en küçük deðerler için hepsini tektek kontrol ettik sadece 
		if ile yaptýðýmýz için tüm koþullarý tektek kontrol ettik
	*/
	if(num1 > num2){ 
		if(num1 > num3){
			enBuyuk = num1;
		}
		if(num2 > num3){
			enKucuk = num3;
		}
		if(num3 > num2){
			enKucuk = num2;
		}	
	}
	if(num1 > num3){
		if(num1 > num2){
			enBuyuk = num1;
		}
		if(num2 > num3){
			enKucuk = num3;
		}
		if(num3 > num2){
			enKucuk = num2;
		}	
	}
	if(num2 > num1){
		if(num2 > num3){
			enBuyuk = num2;
		}
		if(num1 > num3){
			enKucuk = num3;
		}
		if(num3 > num1){
			enKucuk = num1;
		}	
	}
	if(num2 > num3){
		if(num2 > num1){
			enBuyuk = num2;
		}
		if(num1 > num3){
			enKucuk = num3;
		}
		if(num3 > num1){
			enKucuk = num1;
		}	
	}
	if(num3 > num1){
		if(num3 > num2){
			enBuyuk = num3;
		}
		if(num1 > num2){
			enKucuk = num2;
		}
		if(num2 > num1){
			enKucuk = num1;
		}	
	}
	if(num3 > num2){
		if(num3 > num1){
			enBuyuk = num3;
		}
		if(num1 > num2){
			enKucuk = num2;
		}
		if(num2 > num1){
			enKucuk = num1;
		}	
	}
	
	
	printf("toplama : %d\n",toplam);
	printf("carpim : %d\n",carpim);
	printf("ortalama : %d\n",ortalama);
	printf("enBuyuk : %d\n",enBuyuk);
	printf("enKucuk : %d\n",enKucuk);
	
	
}
