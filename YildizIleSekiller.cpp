// Yýldýzlar (*) ile
// Þekiller çizme (Döngüsüz)
/*
	* * * * * *	       * * * * * *								
	*		  *		   * * * * * * 		  			   
	*	KARE  *		   * * * * * *		ÝÇÝ DOLU KARE			 
	*	ÝÇÝ   *		   * * * * * *						  
	*	BOÞ	  *		   * * * * * *					
	*		  *        * * * * * *    							 
	* * * * * *        					  
 */

#include <stdio.h>

// main fonk baslar 
int main(void){
	
	
	printf("-------- ICI DOLU KARE --------\n");
	for(int i = 1;i <= 6;i++){
		for(int j = 1;j <= 6;j++){
			printf("* ");
		}
		printf("\n");
	}
	
	printf("-------- ICI BOS KARE --------\n");
	for(int i = 1;i<=6;i++){
		for(int j = 1;j<=6;j++){
			if(i != 1 && i != 6 ){
				if(j != 1 && j != 6){
					printf("  "); // burada iki boþluk býrakmalýyýz çünkü yýldýz ve boþluk iki karakter
				}
				else{
					printf("* ");
				}
			}
			else{
				printf("* ");
			}
		}
		printf("\n");
	}
	
	
	
	
}// main fonk biter
 
