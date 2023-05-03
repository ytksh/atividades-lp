#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int numerodasala, capacidade, alunosmatriculados;
    printf("Digite o numero da sala: \n");
    scanf("%d", &numerodasala);
    printf("Digite a capacidade da sala: \n");
    scanf("%d", &capacidade);
    printf("Digite a quantidade de alunos matriculados: \n");
    scanf("%d", &alunosmatriculados);
    printf("\n Numero da sala: %d\t Capacidade da sala: %d\t Alunos Matriculados: %d", numerodasala, capacidade, alunosmatriculados);
    if(alunosmatriculados >= capacidade)
        printf("\tSala Lotada\n");
    else
        printf("\tSala Nao Lotada\n");
}
