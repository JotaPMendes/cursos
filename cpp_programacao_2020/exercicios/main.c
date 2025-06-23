#include <stdio.h>	

void soma (int *num, int a, int b) {

	*num = a + b;

	printf("A soma dos números é: %d \n", *num);

}



int main (){

	int num; 
	int a; 
	int b;

	printf("Escreva o primeiro número: \n");
	scanf("%d", &a);
	printf("Escreva o segundo número: \n");
	scanf("%d", &b);

	soma(&num, a, b);

}