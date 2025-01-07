#include <stdio.h>

int main () {

  char nome [20] = "alice";
  float idade;
  double salario;
  int tempo;
    idade = 25;
    salario = 4500.55;

  printf("nome: %s\n", nome);
  printf("idade: %.0f anos\n", idade);
  printf("salario: %.2f reais\n", salario);
  printf("tempo restante para trabalho: ");
  scanf("%d", &tempo);
  printf("minutos\n");

    return 0;


}
