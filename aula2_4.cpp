#include <stdio.h>

int main(){

    // validação de aprovação de credito

    int idade; //"int" variavel inteiro
    float salario; // "salario" float

    printf("Digite sua idade: "); // Informe sua idade
    scanf("%d", &idade); // Ele vai ler a idade

    printf("Digite seu salario: ");
    scanf("%f", &salario);

    if(idade >= 18){ // Se a idade for maior de 18
        if(salario >= 3000){// se o salario for maior de 3000
            printf("Crédito aprovado!\n");
        }
        // Se não Se
        else if(salario >= 1500) // Se o salario for maior de 1500
        printf("Você usar o cartão com o limite reduzido\n");
    }

     else{ // Se não
            printf("Crédito negado. Salário incompativél");
        }

        return 0;
}
// %f -> foat
// %s -> string
// %d