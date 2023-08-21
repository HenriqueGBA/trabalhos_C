#include <stdio.h>
#include <stdlib.h>
//calulo area do triangulo//

int main(){
    int base;
    float altura, area;
    printf("escreva a base do tringulo:\n");
    scanf("%d", &base);

    printf("escreva a alutura do tringulo:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2 ;

    printf("a area do seu triangulo e: %2.0f cm2", area);
}