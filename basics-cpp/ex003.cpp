#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num=0, numm=0, soma=0;
	printf("Primeiro n�mero: ");
	scanf("%d",&num);
	printf("Segundo n�mero: ");
	scanf("%d",&numm);
	soma = num + numm;
	printf("A soma entre %d e %d � %d\n",num,numm,soma);
	system("pause");
	return 0;
}

