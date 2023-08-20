#include <stdio.h>
#include <stdlib.h>
//media de 3 numeros//
int main(){
    int num1, num2, num3, media;

    printf("escreva o primeiro numero:\n");
        scanf("%d", &num1);

    printf("escreva o segundo numero:\n");
        scanf("%d", &num2);
    
     printf("escreva o terceiro numero:\n");
        scanf("%d", &num3);
   
    media = (num1 + num2 + num3) / 3;
    printf("a media dos numeros que voce me deu e:\n %d", media);
    
}