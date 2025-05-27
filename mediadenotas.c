#include <stdio.h>
int main () {

/*calcula a média de três notas inseridas 
pelo usuário. Utilizaremos variáveis para armazenar 
as notas, operadores matemáticos para somar e calcular a 
média, e operadores de atribuição para atualizar valores. 
INICIO
INICIALIZA ALUNOS
FUNÇÃO SOMAR NOTAS
FUNÇÃO MÉDIA
ATRIBUIÇÃO DE VALORES PARA ATUALIZAR AS NOTS
*/
int nota1, nota2, nota3;
float media;


    printf("Digite sua primeira nota: \n");
        scanf(" %d", &nota1);

    printf("Digite sua segunda nota: \n");
        scanf(" %d", &nota2);

    printf("Digite sua terceira nota: \n");
        scanf(" %d", &nota3);
media = (float)(nota1 + nota2 + nota3) / 3;
    printf("Esta é a média das notas: %.1f \n", media);    

    return 0;
}