// media aritmetica de aluno
 
#include <stdio.h>
 
int main(int argc, char *argv[]) {
	float n1, n2, med;
	printf("\ndigite sua nota 1 ");
	scanf("\n%f", &n1);
	printf("\ndigire sua nota 2 ");
	scanf("\n%f", &n2);
	med = (n1 + n2)/2;
	if (med >= 6 ){
		printf("\n aluno aprovado com media %.2f", med);
	}else{
		printf("\n aluno reprovado com media %.2f", med);
	}
}
