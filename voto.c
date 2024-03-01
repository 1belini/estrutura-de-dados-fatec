// permissao de voto
 
#include <stdio.h>
 
int main(){
	int idade;
	printf("digite sua idade \n");
	scanf("\n%d", &idade);
	if(idade < 16){
		printf("nao pode votar");
	}else{
		if (idade >= 18 && idade < 65){
			printf("voto obrigatorio");
		}	
		else{
			if (idade >= 16 && idade < 18 || idade >= 65){
				printf("voto facultativo");
			}
		}
	}
}
