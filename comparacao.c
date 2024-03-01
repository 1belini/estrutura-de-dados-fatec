#include <stdio.h>
 
int main(){
	int num1, num2;
	printf("digite seu numero 1 \n");
	scanf("\n%d", &num1);
	printf("digite seu numero 2 \n");
	scanf("\n%d", &num2);
	if(num1 == num2){
		printf("os numeros sao iguais \n");
	}else{
		if (num1 > num2){
		printf("%d maior que %d", num1, num2);
	}else{
		printf("%d maior que %d", num2, num1);
	}
	}
}
