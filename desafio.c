#include <stdio.h>
 
int main() {
	int a, b, c, aux;
	printf("\ndigite um valor para A");
	scanf("%d", &a);
	printf("\ndigite um valor para B");
	scanf("%d", &b);
	printf("\ndigite um valor para C");
	scanf("%d", &c);
	if (a > b || a > c){
		if(b<c){
			aux = a;
			a = b;
			b = aux;
		}else{
			aux = a;
			a = c;
			c = aux;
		}
	if (b > c){
		aux = b;
		b = c;
		c = aux;
	}
	}
	printf("A = %d, B = %d, C = %d", a,b,c);
}
