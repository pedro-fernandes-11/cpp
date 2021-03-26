#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num, quadrado;
	printf("Número: ");
	scanf("%d",&num);
	quadrado = num * num;
	printf("O quadrado de %d é %d\n",num,quadrado);
	system("pause");
	return 0;
}

