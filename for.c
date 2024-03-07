// for
 
#include <stdio.h>
 
int main() {
	int num, soma=0;
	for (num=1; num<=10; num++){
		printf("\n%d", num);
		soma += num;
	}
	printf("\nsoma = %d",soma);
}