#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num = 0;
	int s;
	int num2 =5;
	while (num<9){
		
		if(num<5){
			s=0;
			while (s <= num){
				printf("*");	
				s =s +1; 						
			}
		}
		
		else{
			s=0;
			while (s <= num2){
				printf("*");	
				s =s -1; 				
			}
		}
		
		
		
		printf("\n");
		num = num+1;		
	}
	
	
	
	return 0;
}
