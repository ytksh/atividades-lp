/* ============================ Bibliotecas ========================= */
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <locale.h>
#include <math.h>
/* ============================= Macros  ============================ */

/* ============================= Funções ============================ */
void logo(){
    printf("\033[1;31m  _______    _         _               _     _   _   _______ _____          \033[0m\n");
    printf("\033[1;31m |__   __|  | |       | |             | |   (_) | | |__   __|  __ \\   /\\    \033[0m\n");
    printf("\033[1;31m    | | __ _| | ____ _| |__   __ _ ___| |__  _  | |    | |  | |  | | /  \\   \033[0m\n");
    printf("\033[1;31m    | |/ _` | |/ / _` | '_ \\ / _` / __| '_ \\| | | |    | |  | |  | |/ /\\ \\  \033[0m\n");
    printf("\033[1;31m    | | (_| |   < (_| | | | | (_| \\__ \\ | | | | | |____| |  | |__| / ____ \\ \033[0m\n");
    printf("\033[1;31m    |_|\\__,_|_|\\_\\__,_|_| |_|\\__,_|___/_| |_|_| |______|_|  |_____/_/    \\_\\\033[0m\n");
    printf("\n");
}

int main()
{
    //permite acentuação
    setlocale(LC_ALL, "Portuguese_Brazil");
    char opcaomenu;
    logo();
    do{
        printf("\n Bem vindo ao sistema, selecione uma opção \n\t1. Cálculo de Ações\n\t2. Sair");
        printf("\n Insira sua opção: ");
        scanf(" %c", &opcaomenu);
        if(opcaomenu == '1'){
            calculadoradeacoes();
            break;
        }
        else{
            exit(0);
        }
    } while(opcaomenu != '1' && opcaomenu != '2');
}
void calculadoradeacoes(){
    //variaveis
    float valmax = 0.0;
    float valacao = 0.0;
    char opcao;
    int i;
    float valorfinal;
    float acoes[5]; //Todo vetor inicia com zero, [0], [1], [2], [3], [4] mas no total há cinco.
    int qantativos[5];
    printf("Defina um valor máximo de aporte para a bolsa de valores: ");
    scanf("%f", &valmax);
    for (i = 1; i <= 5; i++) {
        printf("\n Insira o valor da sua ação: ");
        scanf(" %f", &acoes[i]);
        printf("\n Insira a quantidade do ativo: ");
        scanf(" %d", &qantativos[i]);
    }
    system("CLS");
    logo();
    printf("O usuário entrou com \033[1;32m%gR$\033[0m", valmax);
    printf("\n\t======================== Ativos ========================");
    for (i = 1; i <= 5; i++) {
        printf("\033[1;33m\t\n EMPA%dF:\033[0m \t %gR$\tQntd %d", i, acoes[i], qantativos[i]);
        valorfinal += acoes[i] * qantativos[i];
    }
    if(valorfinal > valmax){
        printf("\n\033[1;31mO resultado é %gR$, o aporte é insuficiente! (%gR$) \033[0m\n", valorfinal, valmax);
    }
    else{
        printf("\n\033[1;32mO resultado é %gR$, o aporte é suficiente! (%gR$) \033[0m\n", valorfinal, valmax);
    }
    do{
        printf("\n Deseja retornar? (S/N)");
        scanf(" %c", &opcao);
        if(opcao == 'S' || opcao == 's'){
            system("CLS");
            main();
        }
        else{
            exit(0);
        }
    } while(opcao != 'S' && opcao != 'N');
}
