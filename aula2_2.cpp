#include <stdio.h>

int main(){
    int numero;

    printf("Digite um numero para contagem regressiva: "); // solicitando um numero ao usuario com o metodo "scanner"
    scanf("%d", &numero);

    while (numero >= 0) // "While" usamos quando a condição for verdadeira
    {
        printf("%d\n", numero);
        numero--; // dimini=uir um numero a cada repetição
    }

    printf("Fim da contagem regressiva\n");
    
    return 0; // Parar o loop

    // "\n" serve para pular linhas
}