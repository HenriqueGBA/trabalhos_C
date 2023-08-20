#include <stdio.h>
#include <stdlib.h>
//calculadora de imc//
int main(){
    int peso;
    float altura;
    int imc;

    printf("digite seu peso: \n");
    scanf("%d", &peso);
    printf("digite sua altura:\n");
    scanf("%f", &altura);

    imc =  peso/(altura*altura);
    printf("seu imc e:\n %2.00d", imc);

}