#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>
void preencherMatriz(char matriz[6][6]) {
    srand(time(NULL)); //inicializa a semente do gerador de números aleatórios com base no tempo do sistema
    for (int i = 0; i < 6; i++) { //laço for que se repete 6 vezes
        for (int j = 0; j < 6; j++) { //outro laço for que se repete 6 vezes
            int valor = rand() % 2; //pega um valor aleatorio
            if (valor == 0) { //se o valor for zero, tera bombas
                matriz[i][j] = '@'; //bomba
            } else { //se nao for zero, esta limpo
                matriz[i][j] = '#'; //limpo
            }
        }
    }
}

void imprimirMatriz(char matriz[6][6], int passoutempo) {
    system("CLS"); //limpa o terminal
    printf("Este e o seu campo minado, voce tem 5 pontos, se perder os 5 voce automaticamente perde o jogo:\n");
    printf("  0 1 2 3 4 5\n"); //imprime fileira horizontal das coordenadas
    if(!passoutempo){ //se o valor for falso, ele imprime a matriz inteira, mostrando tudo para o usuario por 5 segundos
        for (int i = 0; i < 6; i++) { //laço for que se repete 6 vezes
            printf("%d ", i); //imprime a fileira vertical das coordenadas
            for (int j = 0; j < 6; j++) { //laço for que se repete 6 vezes
                printf("%c ", matriz[i][j]); //imprime cada elemento da matriz
            }
            printf("\n");
        }
        printf("Voce tem 5 segundos para decorar a posicoes das bombas antes dela sumir.\n");
        }
    else{
        for (int i = 0; i < 6; i++) { //laço for que se repete 6 vezes
            printf("%d ", i); //imprime a fileira vertical das coordenadas
            for (int j = 0; j < 6; j++) { //laço for que se repete 6 vezes
                printf("# ", matriz[i][j]); // imprimir parte oculta do jogo
            }
            printf("\n");
        }
    }
}
void preencherMatrizdeUsuario(char matrizusuario[6][6], char matriz[6][6], int pontos) { //recebe a matriz do usuario que sera visualizada, a matriz gerada e a quantidade de pontos (5)
    int linha, coluna;
    if(pontos < 1){ //caso o usuario tenha menos de 1 ponto (0) ele perde o jogo
        system("CLS"); //limpa o terminal
        printf("Voce perdeu!");
        exit(0); // interrompe o jogo
    }
    printf("Digite a linha: \n");
    scanf(" %d", &linha); //usuario insere qual linha ele quer selecionar
    printf("Digite a coluna: \n");
    scanf(" %d", &coluna); //usuario insere qual coluna ele quer selecionar
    for (int i = 0; i < 6; i++) { //laço for que se repete 6 vezes
        for (int j = 0; j < 6; j++) { //laço for que se repete 6 vezes so que para as colunas da matriz
            if (matriz[linha][coluna] == '@') {
                printf("Voce encontrou uma bomba e perdeu 1 ponto!\n");
                matrizusuario[linha][coluna] = '@'; // atribue @ valor bomba
                pontos--; //remove 1 ponto
                break; // quebra o loop
            } else {
                printf("Nao ha bombas aqui.\n");
                matrizusuario[linha][coluna] = 'S'; // atribue S valor de lugar seguro
                break; // quebra o loops
            }
        }
        break;
    }
    sleep(3); // pausa a execução por 3 segundos
    system("CLS"); //limpa o terminal
    printf("  0 1 2 3 4 5\n"); //imprime a fileira horizontalmente para representar as coordenadas
    for (int i = 0; i < 6; i++) { // laço for para imprimir o terminal
        printf("%d ", i); // imprime a fileira verticalmente para representar as coordenadas
        for (int j = 0; j < 6; j++) { //laço for que se repete 6 vezes
            if(matrizusuario[i][j] == 'S') //utilização de cores para representar a bomba e os campos limpos
                printf("\033[1;32m%c \033[0m", matrizusuario[i][j]); //caso o campo esteja limpo, imprime o texto verde
            else if (matrizusuario[i][j] == '@')
                printf("\033[1;31m%c \033[0m", matrizusuario[i][j]); //se haver uma bomba, imprime vermelho
            else
                printf("%c ", matrizusuario[i][j]); // se o usuario nao interagir com esse campo, imprime ele cinza
        }
        printf("\n");
    }
    preencherMatrizdeUsuario(matrizusuario, matriz, pontos);// chama a função de novo, utilizando recursividade
}

int main() {
    char matriz[6][6]; //a matriz que sera gerada
    char matrizusuario[6][6]; //a matriz que o usuario vai visualizar
    preencherMatriz(matriz); //gera a matriz com elementos laeatorios
    imprimirMatriz(matriz, 0);// não passa o tempo
    sleep(5); //pausa a execução por 5 segundos
    imprimirMatriz(matriz, 1); // passa o tempo
    for (int i = 0; i < 6; i++) { // laço for para preencher a matriz de usuario com #
        for (int j = 0; j < 6; j++) { //laço for que se repete 6 vezes
            matrizusuario[i][j] = '#'; //preenche a matriz inteira com #
        }
    }
    preencherMatrizdeUsuario(matrizusuario, matriz, 5); //começa a função recursiva para que o jogo se inicie
}
