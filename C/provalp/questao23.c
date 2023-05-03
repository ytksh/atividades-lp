#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float p1, p2, p3;
    printf("Coloque quanto voce tirou na primeira prova: \n");
    scanf("%f", &p1);
    printf("Coloque quanto voce tirou na segunda prova: \n");
    scanf("\n%f", &p2);
    printf("Coloque quanto voce tirou na terceira prova: \n");
    scanf("\n%f", &p3);
    float notafinal = (p1 + p2 + p3) / 3;
    printf("Sua media foi %.2f", notafinal);
    if(notafinal >= 6)
        printf("| Aprovado");
    else
        printf("| Reprovado");
}
