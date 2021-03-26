#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_CTYPE, "Portuguese");
	printf("Hello, world!");
	system("pause");
	return 0;
}

