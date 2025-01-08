#include <stdio.h>

int main () {

char inicial;
char nome [20] = "Leonny";
int idade;
float altura;
double salario;
char confirmar;
char UF[20];


inicial = 'A';  
idade = 28;
altura = 1.69;
salario = 3300.40;
int cpf = 0;
printf("Inicial: %c\n", inicial);
printf("Nome: %s\n", nome);
printf("Idade: %d\n", idade);
printf("Altura: %.2f\n", altura);
printf("Salario: %.2f\n", salario);
printf("Entre com os três primeiros dígitos dos CPF e UF: \n");
scanf("%d %s", &cpf, UF);
printf("Confirma o número %d? (S|N)\n", cpf);
scanf(" %c", &confirmar);
printf("Resposta: %c\n", confirmar);

return 0;



}