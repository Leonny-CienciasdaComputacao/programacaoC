#include <stdio.h>
    
    int main () {
/* Operadores Matemáticos:
Soma (+)
Subtração (-)
Multiplicação (*)
Divisão (/)
*/
    int numero1, numero2;
    int soma, subtracao, multiplicacao;
    float divisao;

     printf("Entre com o número 1: \n");
        scanf(" %d", &numero1);
        printf("Entre com o número 2: \n");
        scanf("%d", &numero2);

//Operação Soma
    soma = numero1 + numero2;

//Operação subtração
    subtracao = numero1 - numero2;

//Operação Divisão
    divisao = numero1 / numero2;

//Operação Multiplicação
    multiplicacao = numero1 * numero2;

       
        printf("Resultado da multiplicação: %d\n", multiplicacao);
        printf("Resultado da divisão: %.2f\n", divisao);
        printf("Resultado da soma: %d\n", soma);
        printf("Resultado da subtração: %d\n", subtracao);



/*Operações de Atribuição
Atribuição Simples (=)
Atribuião com Soma (+=)
Atribuição com Subtração (-=)
Atribuição com Multiplicação (*=)
Atribuição com Divisão (/=)
*/



//Operação de Atribuição Simples
   

//Atribuição com Soma
    soma += 3;
    subtracao += 3;
    divisao += 3;
    multiplicacao += 3;

//Atribuição com Subtração
    soma -= 1;
    subtracao -= 1;
    multiplicacao -= 1;
    divisao -= 1;

//Atribuição com Multiplicação
    soma *= 4;
    subtracao *= 4;
    multiplicacao *= 4;
    divisao *= 4;

//Atribuição com Dibisão
    soma /= 2;
    subtracao /= 2;
    multiplicacao /= 2;
    divisao /= 2;

//Mostrar Resultado das Atribuições
    printf("O resultado das atribuições é:\n soma %d\n subtração %d\n multiplicação %d\n divisão %.2f\n", soma, subtracao, multiplicacao, divisao);

    return 0;
}