#include <stdio.h>

int main(){

    // criar um menu para operações de matematica
    int op;
    float a, b, c; // float é um numero quebrado

    printf("Escolha uma operação:\n 1 - Soma \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n "); // solicita uma informação ao usuário "printf"
    scanf("%d", &op);
    // %d é como se fosse uma quebra ","

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b); // teremos duas variaveis

    // "%f" ele vai pegar po float a var "A" e "B"
    // por ter 2 variaveis, teremos que inserir dois (%f %f) e (%a %b)

    switch (op)
    {
    case 1: // soma
        printf("Resultado: %.2f\n", a+b); // nesse caso ele irá somar

        break;
    case 2:
        printf("Resultado: %.2f\n", a-b);

        break;

    case 3:
        printf("Resultado: %.2f\n", a*b);

        break;

    case 4:
        if(b !=0)
        printf("Resultado: %.2f\n", a/b);
        else
        printf("Divisão por xero !!, ERRO \n");
        break;

    default:
    printf("Opção Invalida");
        break;
    }

    // %.2f -> será mostrado duas casas decimais apos o ponto, e tem um numero float

}