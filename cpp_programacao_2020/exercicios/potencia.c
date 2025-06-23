#include <stdio.h>
#include <locale.h>

void potencia(int *total,int a, int b) {

    int p = 1;

    for(int i = 0; i < b; i++) {
        p = p * a;
        (*total = p);
    }

    printf("O resultado é %d.", (*total));
}

int main () {

	int base;
	int expoente;
	int total;

	printf("Escreva a base: \n");
	scanf("%d" , &base);
	printf("Escreva o expoente: \n");
	scanf("%d", &expoente);

	potencia(&total, base, expoente);
}