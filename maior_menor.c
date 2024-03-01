#include <stdio.h>
 
int main(){
	int num1, num2, num3;
	printf("digite seu numero 1 \n");
	scanf("\n%d", &num1);
	printf("digite seu numero 2 \n");
	scanf("\n%d", &num2);
	printf("digite seu numero 3 \n");
	scanf("\n%d", &num3);
	if(num1 > num2 && num1 > num3){
		printf("%d maior de todos", num1);
	}else{
		if (num2 > num1 && num2 > num3){
			printf("%d maior de todos", num2);
		}	
		else{
			printf("%d maior de todos", num3);
		}
	}
}
