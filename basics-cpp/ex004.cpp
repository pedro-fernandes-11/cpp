#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num=0, numm=0, produto=0;
	printf("Primeiro número: ");
	scanf("%d",&num);
	printf("Segundo número: ");
	scanf("%d",&numm);
	produto = num * numm;
	printf("O produto entre %d e %d é %d\n",num,numm,produto);
	system("pause");
	return 0;
}

