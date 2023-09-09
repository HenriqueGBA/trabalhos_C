#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int pedra, papel, tesoura , escolha, maquinha;
	
	printf("Faca sua escolha para o jogo de jokenpo\n");
    printf("-----------------------------------------\n");
    printf(" 0- pedra\n 1- papel \n 2- tesoura \n");
    printf("-----------------------------------------\n");
	scanf("%d", &escolha);

        srand(time(NULL));
        maquinha = rand()%3;
		
	if (escolha == 0 ){
		switch (maquinha){
			case 0:
            printf("a maquina escolheu %d \n", maquinha);
			printf("os dois jogadores jogaram pedra deu empate");break;
			case 1: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("Você perdeu o adversario jogou papel, pedra perde para papel");break;
			case 2: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("Você ganhou o adversario jogou tesoura, pedra ganha de tesoura");break;
	        }
	}
	else if (escolha == 1 ){
		switch (maquinha){
			case 0:
            printf("a maquina escolheu %d \n", maquinha);
			printf("papel ganha de pedra ");break;
			case 1: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("papel e papel da empate");break;
			case 2: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("tesoura ganha de papel");break;
	    }	
	}else if (escolha == 2 ){
		switch (maquinha){
			case 0:
            printf("a maquina escolheu %d \n", maquinha);
			printf("tesoura perde para pedra");break;
			case 1: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("tesoura ganha de papel");break;
			case 2: 
            printf("a maquina escolheu %d \n", maquinha);
			printf("tesoura e tesoura da empate");break;
	}
}else{
	printf("voce digitou um numero aleatorio");
		}		
}
     

    



