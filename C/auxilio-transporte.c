#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0; //idade do usuario
    int aux = 200; //auxilio transporte
    int carro = 0; //carro (sim ou nao)
    printf("Insira sua idade\n");
    scanf("%d", &i); //insere a idade no scanf
    printf("Voce tem carro? (1 = SIM, 0 = NAO) \n"); //usa zero e um ao invés de sim e não
    scanf("%d", &carro); //insere 0 ou 1 para determinar se o usuario tem carro
    if(!carro)
        if(i >= 18 && i <= 50){ //mais ou igual a 18 anos, menos ou igual a 50 anos
            aux = 500;} //auxilio de 500
        else{ // O else será o contrário do if acima, se a pessoa tem menos de 18 ou mais de 50 o auxilio será 200
            aux = 200; //como o carro não é uma condição aqui, o auxilio será 200 de qualquer jeito
        }
    else{
        aux = 200; //quem tem carro vai ter 200 de auxilio de qualquer jeito
    }
    printf("Voce recebera o auxilio de %d reais", aux);
    return 0;
}
