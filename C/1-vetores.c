#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[6] = {1, 0, 5, -2, -5, 7}, soma;
    for(int i = 0; i < 6; i++){
        printf("vetor [%d] = %d\n", i, a[i]);
    }
    soma = a[0] + a[1] + a[5];
    printf("Soma: %d\n", soma);
    a[4] = 100;
    for (int i = 0; i < 6; i++) {
        printf("vetor[%d] = %d\n", i, a[i]);
    }
}
