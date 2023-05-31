#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float TRUERMS(float volts[],int N){
    register int i;
    float rms = 0.0;

    for(i=0;i<N; i++){
        volts[i] *= volts[i];
        rms += volts[i];
    }

    rms /= N;
    return sqrt(rms);

}

void main()
{
    float vrms[5] = {1.5, 3.8, 4.9, 5.7, 2.1};
    printf("Vrms calculado = %.4fV\n", TRUERMS(vrms, 5));
}


