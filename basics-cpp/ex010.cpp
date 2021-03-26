#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num;
	float terco, metade;
	printf("Número: ");
	scanf("%d",&num);
	metade = (float)num/2;
	terco = (float)num/3;
	printf("A metade é %.2f e a terça parte é %.2f\n",metade,terco);
	system("pause");
	return 0;
}

