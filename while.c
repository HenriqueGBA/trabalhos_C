#include <stdio.h>

int main(){

    int x , soma;
    
    soma = 0;
    printf("Digite o primeiro numero:\n");
    scanf("%d", &x);
    //enquanto nao digitar 0 ele vai continuar somando
    while (x != 0 ) {
        soma = soma + x;
        printf("digite outro numero:\n");
        scanf("%d", &x);
        }
    //vai falar a soma no final
    printf("Soma = %d\n", soma);
    return 0;
}