#include <stdio.h>
int main () {

/*Modificadores de Tipos de Dados
- Signed = modificador padrão, permite armazenar em uma variável valores positivos e negativos. Aplicável aos especificadores de formato INT e CHAR.
-Unsigned = permite apenas, armazenar em variáveis, valores positivos (sem sinal), dobrando a capacidade de armazenamento do especificador de formato INT e CHAR.
-Long = aumenta a capacidade de armazenamento de valores em variáveis int e char.
-Long Long = aumento ainda mais a capacidade de armazenamento.
-short = reduz a capacidade de armazenamento de uma variável INT ou CHAR (reduzindo o consulmo de memória).
*/
/*Operadores Relacionais
#Retornam valores Booleanos (1 para verdadeiro, 0 para falso), tornando possível testar hipóteses. 
São os seguintes: > (maior que); < (menor que); >= (maior ou igual a); <= (menor ou igual a); == (igual a); != (diferente de).
*/

char produtoA[30] = "Produto A";
char produtoB[30] = "Produto B";

unsigned int estoqueA = 1000;
unsigned int estoqueB = 2000;

float valorA = 10.50;
float valorB = 20.40;

unsigned int estoqueMinimoA = 500;
unsigned int estoqueMinimoB = 2500;

double valorTotalA;
double valorTotalB;

int resultadoA, resultadoB;

//Exibir as informações dos produtos
    printf("O produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("O produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

//Comparação com o valor mínimo de estoque
resultadoA = estoqueA > estoqueMinimoA;
resultadoB = estoqueB > estoqueMinimoB;
    printf("O produto %s tem estoque mínimo? %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque mínimo? %d\n", produtoB, resultadoB);

//Comparações entre os valores totais dos produtos
    printf("O valor de total de A (R$ %.2f) é maior que o valor total de B (R$ %.2f): %d\n", 
        ((float)estoqueA * valorA), ((float)estoqueB * valorB), (((float)estoqueA * valorA) > ((float)estoqueB * valorB)));

return 0;    
}
