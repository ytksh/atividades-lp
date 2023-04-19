#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main()
{
    int nota1, nota2, mf;
    char nome;
    printf("Insira seu nome: ");
    scanf("%s", &nome);
    printf("Insira a nota da p1: \n");
    scanf("%d", &nota1);
    printf("Insira a nota da p2: \n");
    scanf("%d", &nota2);
    system("cls");
    mf = (nota1 + nota2) / 2;
    printf("\t Media Final de %s %d", nome, mf);
    if(mf < 7)
        printf("\t Vc reprovou, jumento!");
    else
        printf("\t Vc passou, genio!");
}
