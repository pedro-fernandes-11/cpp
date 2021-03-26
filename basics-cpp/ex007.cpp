#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int suc, ant, num;
	printf("Número: ");
	scanf("%d",&num);
	ant = num - 1;
	suc = num + 1;
	printf("Sucessor: %d\n",suc);
	printf("Antecessor: %d\n",ant);
	system("pause");
	return 0;
}

