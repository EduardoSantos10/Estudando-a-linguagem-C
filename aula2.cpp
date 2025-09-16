#include <stdio.h> // biblioteca do C

int main(){ // local onde meu codigo será executado

    // Declaração de variavel
    int n, // int "inteiro"
    // "float" -> numeros quebrados (EX: 3.14, 0.5)

    soma = 0; // atribuição de valor na variavel soma

    printf("Digite um numero N: "); // scanner (solicitando um numero)
    scanf("%d", &n);

    // o for percorre de 1 a 10 vezes a nossa lista
    for(int i= 1; i<= n; i++){ // o for é usado quantas vez que eu quero percorrer a minha lista
        soma += i; // soma = soma + 1
    }

    printf("A soma dos numeros de 1 %d, é %d", n, soma );
    return 0;

    // "FOR" usamos quando a condição for verdadeira

}