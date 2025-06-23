#include <stdio.h>
#include <locale.h>

int main() {

	int v1;
	int v2;

	printf("Primeiro valor: \n");
	scanf("%d", &v1);

	printf("Segundo valor: \n");
	scanf("%d", &v2);

	int m = v1 * v2;
	printf("A multiplicação entre %d e %d é %d \n", v1, v2, m );

}	