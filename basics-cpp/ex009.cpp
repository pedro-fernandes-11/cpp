#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int soma=0, n1, n2, n3;
	float media;
	char nome[20];
	printf("Qual seu nome? ");
	scanf("%s",nome);
	printf("Suas 3 notas: ");
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%d",&n3);
	soma = n1 + n2 + n3;
	media = (float)soma/3;
	printf("%s, a sua média é %.2f\n",nome, media);
	system("pause");
	return 0;
}

