#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
void preencherMatriz(char matriz[6][6]) {
    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            int valor = rand() % 2;
            if (valor == 0) {
                matriz[i][j] = '@';
            } else {
                matriz[i][j] = '#';
            }
        }
    }
}

void imprimirMatriz(char matriz[6][6], int passoutempo) {
    system("CLS");
    printf("Este e o seu campo minado, voce tem 5 pontos, se perder os 5 voce automaticamente perde o jogo:\n");
    printf("  0 1 2 3 4 5\n");
    if(!passoutempo){
        for (int i = 0; i < 6; i++) {
            printf("%d ", i);
            for (int j = 0; j < 6; j++) {
                printf("%c ", matriz[i][j]);
            }
            printf("\n");
        }
        printf("Voce tem 5 segundos para decorar a posicoes das bombas antes dela sumir.\n");
        }
    else{
        for (int i = 0; i < 6; i++) {
            printf("%d ", i);
            for (int j = 0; j < 6; j++) {
                printf("# ", matriz[i][j]);
            }
            printf("\n");
        }
    }
}
void preencherMatrizdeUsuario(char matrizusuario[6][6], char matriz[6][6], int pontos) {
    int linha, coluna;
    if(pontos < 1){
        system("CLS");
        printf("Voce perdeu!");
        exit(0);
    }
    printf("Digite a linha: \n");
    scanf(" %d", &linha);
    printf("Digite a coluna: \n");
    scanf(" %d", &coluna);
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (matriz[linha][coluna] == '@') {
                printf("Voce encontrou uma bomba e perdeu 1 ponto!\n");
                matrizusuario[linha][coluna] = '@';
                pontos--;
                break;
            } else {
                printf("Nao ha bombas aqui.\n");
                matrizusuario[linha][coluna] = 'S';
                break;
            }
        }
        break;
    }
    sleep(3);
    system("CLS");
    printf("  0 1 2 3 4 5\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", i);
        for (int j = 0; j < 6; j++) {
            if(matrizusuario[i][j] == 'S') //utilização de cores para representar a bomba e os campos limpos
                printf("\033[1;32m%c \033[0m", matrizusuario[i][j]);
            else if (matrizusuario[i][j] == '@')
                printf("\033[1;31m%c \033[0m", matrizusuario[i][j]);
            else
                printf("%c ", matrizusuario[i][j]);
        }
        printf("\n");
    }
    preencherMatrizdeUsuario(matrizusuario, matriz, pontos);
}

int main() {
    char matriz[6][6];
    char matrizusuario[6][6];
    preencherMatriz(matriz);
    imprimirMatriz(matriz, 0);
    sleep(5);
    imprimirMatriz(matriz, 1);
    for (int i = 0; i < 6; i++) { // laço for para preencher a matriz de usuario com #
        for (int j = 0; j < 6; j++) {
            matrizusuario[i][j] = '#';
        }
    }
    preencherMatrizdeUsuario(matrizusuario, matriz, 5);
}
