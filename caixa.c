//caixa de mercado
 
#include <stdio.h>
 
int main() {
	int total = 0, valor, produto;
	while(produto <= 5){
		printf("Qual e o preco do seu produto? \n");
		scanf("%d", &valor);
		total += valor;
		produto++;
	}
	printf("o valor total foi de %d", total);
}
