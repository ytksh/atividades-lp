#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
  int c;
  float n1, n2,n3, maiornota;
  printf(" Qual o seu código de aluno?");
  scanf("\n%d", &c);
  printf("\n Qual foi sua nota 1?");
  scanf("\n%f", &n1);
  printf("\n Qual foi sua nota 2?");
  scanf("\n%f", &n2);
  printf("\n Qual foi sua nota 3?");
  scanf("\n%f", &n3);
  system("CLS");
  printf("\nCodigo do aluno: %d\n", c);
  if(n1 > n2 && n1 > n3){
    printf("P1: %g\n", (n1 * 0.4));
    printf("P2: %g\n", (n2 * 0.3));
    printf("P3: %g\n", (n3 * 0.3));
    maiornota = (n1 * 0.4) + (n2 *0.3) + (n3 * 0.3);
    printf("Media: %g", maiornota);
  }
  if(n2 > n1 && n2 > n3){
    printf("P1: %g\n", (n1 * 0.3));
    printf("P2: %g\n", (n2 * 0.4));
    printf("P3: %g\n", (n3 * 0.3));
    maiornota = (n2 * 4.0) + (n1*3.0) + (n3*3.0);
    printf("Media: %g", maiornota);}
  if(n3 > n1 && n3 > n2){
    printf("P1: %g\n", (n1 * 0.3));
    printf("P2: %g\n", (n2 * 0.3));
    printf("P3: %g\n", (n3 * 0.4));
    maiornota = (n3 * 4.0) + (n1*3.0) + (n2*3.0);
    printf("Media: %g", maiornota);}
  if(maiornota >= 5.0)
    printf("\tAPROVADO");
  else
    printf("\tREPROVADO");
}



