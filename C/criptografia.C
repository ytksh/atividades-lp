#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int criptografar(int bytes[], int N){
    for(int i = 0; i < N; i++){
        if(i % 2 ==0){
            bytes[i] += 5;
            printf("PAR | byte = 0x%X\n", bytes[i]);
        }
        else{
            bytes[i] -= 3;
            printf("IMPAR | byte = 0x%X\n", bytes[i]);
        }
    }
    menu(bytes, N);
}

int descriptografar(int bytes[], int N){
    for(int i = 0; i < N; i++){
        if(i % 2 ==0){
            bytes[i] -= 5;
            printf("PAR | byte = 0x%X\n", bytes[i]);
        }
        else{
            bytes[i] += 3;
            printf("IMPAR | byte = 0x%X\n", bytes[i]);
        }
    }
    menu(bytes, N);
}

int menu(int bytes[], int N){
    int opcao;
    printf("Voce deseja criptografar ou descriptografar?\n 1. criptografar \n 2. descriptografar\n");
    scanf("%d", &opcao);
    if(opcao == 1){
        criptografar(bytes, N);
    }
    else if(opcao == 2){
        descriptografar(bytes, N);
    }
    else{
        return 0;
    }
}

void main()
{
    int bytes[6] = {0xA0, 0x73, 0x25, 0xD3, 0xCA, 0xFE}, N = 6;
    printf("Seus bytes sao:\n");
    for(int i= 0; i < N; i++){
        printf("byte = 0x%X\n", bytes[i]);
    }
    menu(bytes, N);
}
