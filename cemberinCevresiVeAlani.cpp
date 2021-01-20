// Çemberin çevresi ve alanýný bulan program
// çemberin yarýçapýný kullanýcýdan alalým 
// pi = 3,14159 sabit olarak alacaðýz
// alan = pi * r^2   cevre = 2*pi*r
#include <stdio.h>


// main fonk baþlar
int main(void){
	const float PI = 3.14159; // pi sabitini oluþturduk ve þimdi istesek de deðiþtiremeyiz
	float yaricap;
	printf("Cemberin Yaricapini Girin : ");
	scanf("%f",&yaricap);
	printf("alan : %f\n",PI*yaricap*yaricap);
	printf("cevre : %f\n",2*PI*yaricap);
	
}
