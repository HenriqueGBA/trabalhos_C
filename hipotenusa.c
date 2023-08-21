#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//calculo de hipotenusa
int main(){
    int cateto1, cateto2, hipotenusa, soma_catetos;

    printf("insira o primeiro cateto:\n");
    scanf("%d", &cateto1);

    printf("insira o segundo cateto:\n");
    scanf("%d", &cateto2);

    soma_catetos=pow(cateto1,2) + pow(cateto2,2);
        hipotenusa = sqrt(soma_catetos);

    printf("a hipotenusa do seu tringulo retangulo e: %d", hipotenusa);
}