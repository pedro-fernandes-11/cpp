#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int idade=0, ano=0;
	printf("Que ano voc� nasceu? ");
	scanf("%d",&ano);
	idade = 2020 - ano;
	printf("Ou voc� tem %d anos, ou voc� faz %d anos esse ano\n",idade ,idade);
	system("pause");
	return 0;
}

