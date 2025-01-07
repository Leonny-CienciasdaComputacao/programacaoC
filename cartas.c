#include <stdio.h>

int main () {

char inicial;
char nome [20] = "Leonny";
int idade;
float altura;
double salario;
int confirmado = 1;
int negado = 0;

inicial = 'A';  
idade = 28;
altura = 1.69;
salario = 3300.40;

printf("Inicial: %c\nNome: %s\nIdade: %d\nAltura: %.2f\nSalario: %.2f\n", inicial, nome, idade, altura, salario);
printf("Os dados acima estão corretos? ");
scanf("%d", &confirmado); 
printf("Resposta aceita.\n");
return 0;



}