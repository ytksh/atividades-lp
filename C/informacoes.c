#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<windows.h>
#include<string.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    char nome[20];
    printf("Digite seu nome: ");
    gets( nome);
    printf("O nome digitado foi %s\n", nome);
    char sobrenome[20];
    printf("Digite seu sobrenome: ");
    gets( sobrenome);
    printf("O nome digitado foi %s\n", sobrenome);
    char endereco[100];
    printf("Digite seu endereço: ");
    fflush(stdin);
    gets(endereco);
    printf("O endereço digitado foi %s\n", endereco);
    char bairro[100];
    printf("Digite seu bairro: ");
    fflush(stdin);
    gets(bairro);
    printf("O bairro digitado foi %s\n", bairro);
    char cidade[100];
    printf("Digite sua cidade: ");
    fflush(stdin);
    gets(cidade);
    printf("A cidade digitada foi %s\n", cidade);
    char cep[12];
    printf("Digite seu cep: ");
    fflush(stdin);
    gets(cep);
    printf("O CEP digitado foi %s\n", cep);
    char telefone[12];
    printf("Digite seu telefone: ");
    fflush(stdin);
    gets(telefone);
    printf("O telefone digitado foi %s\n", telefone);
    system("CLS");
    printf("Nome: %s %s\n", nome, sobrenome);
    printf("Endereço: %s, %s\n", endereco, bairro);
    printf("Cidade: %s\n", cidade);
    printf("CEP: %s\n", cep);
    printf("Telefone: %s\n", telefone);
    }
