#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num, quadrado;
	printf("N�mero: ");
	scanf("%d",&num);
	quadrado = num * num;
	printf("O quadrado de %d � %d\n",num,quadrado);
	system("pause");
	return 0;
}

