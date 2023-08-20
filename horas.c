#include <stdio.h>
#include <stdlib.h>
//Escreva um algoritmo que leia horas, minutos e segundos do teclado e apresente o tempo total em segundos.
int main(){
    int horas, segundos, total_segundos, minutos;
   
    printf("Digite as horas:\n");
    scanf("%d", &horas);

    printf("Digite os minutos:\n");
    scanf("%d", minutos);

    printf("Digite os segundos:\n");
    scanf("%d", &segundos);

    total_segundos = (horas * 3600) + (minutos * 60) + segundos;
    printf("Tempo total em segundos e: %d", total_segundos);
}