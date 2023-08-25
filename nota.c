#include <stdio.h>

int main(){
    //utilizando o double para aprendizado porem poderia utilizar float
    double nota1 , nota2 , nota_final;

    printf("Qual a sua nota no primeiro semestre na disciplina?:\n");
    scanf("%lf", &nota1);

    printf("Qual foi a sua segunda nota no segundo semestre da disciplina?:\n");
    scanf("%lf", &nota2);
    
    nota_final = nota1 + nota2;
    //se a nota for maior igual que 60.0 (media da escola) o programa dira que ele passou na materia,se nao escrevera que ele reprovou
    if (nota_final >= 60.0){
        printf("Parabens sua nota foi %.1lf  voce esta aprovado na materia :)", nota_final);
    }
        else {
            printf("Que pena sua nota foi %lf voce esta reprovado na materia", nota_final);
        }


}