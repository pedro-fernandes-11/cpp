#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	int num;
	float terco, metade;
	printf("N�mero: ");
	scanf("%d",&num);
	metade = (float)num/2;
	terco = (float)num/3;
	printf("A metade � %.2f e a ter�a parte � %.2f\n",metade,terco);
	system("pause");
	return 0;
}

