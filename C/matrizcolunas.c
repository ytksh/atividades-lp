#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

int main()
{
    int mat[5][6] = {0};
    int linha,coluna,valor;

    do{
        setlocale(LC_ALL, "Portuguese_Brazil");
        printf("\xE2\x9C\x8C️  Olá, mundo! \xF0\x9F\x8C\x8E\n");
        printf("-------------------------------------\n");
        printf("| %3d | %3d | %3d | %3d | %3d | %3d |\n",mat[1][0],mat[1][1],mat[1][2],mat[1][3],mat[1][4],mat[1][5]);
        printf("-------------------------------------\n");
        printf("| %3d | %3d | %3d | %3d | %3d | %3d |\n",mat[2][0],mat[2][1],mat[2][2],mat[2][3],mat[2][4],mat[2][5]);
        printf("-------------------------------------\n");
        printf("| %3d | %3d | %3d | %3d | %3d | %3d |\n",mat[3][0],mat[3][1],mat[3][2],mat[3][3],mat[3][4],mat[3][5]);
        printf("-------------------------------------\n");
        printf("| %3d | %3d | %3d | %3d | %3d | %3d |\n",mat[4][0],mat[4][1],mat[4][2],mat[4][3],mat[4][4],mat[4][5]);
        printf("-------------------------------------\n");
        printf("Insira o numero da linha: "); scanf("%d",&linha);
        printf("Insira o numero da coluna: "); scanf("%d",&coluna);
        printf("Insira o valor: "); scanf("%d",&valor);
        mat[linha][coluna]=valor;
        if(linha>4||coluna>5)
        {
            linha=0;
            coluna=0;
            valor=0;
        }
    system("CLS");
    }
    while(1);
    return(0);
}
