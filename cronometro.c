/*
CALCULA O SUCESSOR DE UM NUMERO, COM BASE UM CRONOMETRO ONDE DEPOIS DE 59 O VALOR É 0
*/
 
#include <stdio.h>
 
int main(int argc, char *argv[]) {
	int num, suc;
	printf("\n Digite um numero:");
	scanf("%d", &num);
	suc = (num + 1)%60;
	printf("\n O sucessor de %d = %d", num, suc);
}
