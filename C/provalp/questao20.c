#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    int a;
    printf("digite um numero: \n");
    scanf("%d", &a);
    if((a % 5 == 0) && (a % 3) == 0){
        printf("O seu numero e divisivel por 5 e 3: %d", a);
    }
    else{
        printf("Seu numero nao e divisivel por 5 nem 3.");
    }
}
