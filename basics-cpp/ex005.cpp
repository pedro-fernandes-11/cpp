#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num=0, numm=0, soma=0, produto=0;
	printf("Primeiro n�mero: ");
	scanf("%d",&num);
	printf("Segundo n�mero: ");
	scanf("%d",&numm);
	soma = num + numm;
	produto = num * numm;
	printf("A soma entre %d e %d � %d\n",num,numm,soma);
	printf("O produto entre %d e %d � %d\n",num,numm,produto);	
	system("pause");
	return 0;
}

