#include <stdio.h>

int soma(int *nums, int tam) {

    int total = 0;

    for(int i = 0; i < tam ; i++) {
        total += nums[i];
    }

    return total;
}

int main() { 

    int valores[3] = {10,20,30};

    int tam = sizeof(valores) / sizeof(int);

    int resposta = soma(valores, tam);
    
    printf("A soma é %d ", resposta);
}


