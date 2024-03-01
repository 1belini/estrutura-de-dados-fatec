//par ou impar
 
#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int num;
	printf("\ndigite seu numero ");
	scanf("\n%d", &num);
	if (num % 2 == 0 ){
		printf("\nnumero par");
	}else{
		printf("\nnumero impar");
	}
}
