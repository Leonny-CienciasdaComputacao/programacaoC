#include <stdio.h> 
int main () {

int numero1 = 10, numero2 = 5;

if(numero1 > numero2){
    printf("Numero 1 é maior que número 2.\n");

    //Exercício da hora de codar NOVATO

    float temperatura;
    float umidade;
    unsigned int estoque;
    int estoqueminimo = 1000;

    printf("Entre com a temperatura: \n");
        scanf(" %f", &temperatura);
    printf("Entre com a umidade: \n");
        scanf(" %f", &umidade);
    printf("Entre com o estoque: \n");
        scanf(" %u", &estoque);
    
    if(temperatura > 30) {
        printf("A temperatura está alta\n");
    } else { 
        printf("A temperatura está adequada\n");
    }
    if(umidade > 50) {
        printf("A umidade está elevada\n");
    } else {
        printf("A umidade está adequada\n");
    }
    if(estoque < estoqueminimo) {
        printf("Estoque abaixo do mínimo\n");
    } else {
        printf("Estoque normal\n");
    }

}
return 0;
}
