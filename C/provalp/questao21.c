#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int main(){
    float salariominimo, salariofuncionario;
    int ndependentes;
    printf("Insira o salario minimo: ");
    scanf("%f", &salariominimo);
    printf("\nInsira o salario do funcionario : ");
    scanf("%f", &salariofuncionario);
    printf("\nInsira o numero de dependentes : ");
    scanf("%d", &ndependentes);
    system("CLS");
    printf("Salario minimo: %gR$", salariominimo);
    printf("\nSalario do Funcionario: %gR$", salariofuncionario);
    printf("\nNumero de Dependentes: %d", ndependentes);
    printf("\nO imposto adicional sera de %g", (salariofuncionario * 0.04));
    if(salariofuncionario > (salariominimo * 12)){
        printf("\nO imposto sera de %g",(salariofuncionario * 0.2));
        printf("\nIMPOSTO FINAL: %g",(salariofuncionario * 0.2) + (salariofuncionario * 0.04));}
    else if(salariofuncionario > (salariominimo * 5)){
        printf("\nO imposto sera de %g",(salariofuncionario * 0.08));
        printf("\nIMPOSTO FINAL: %g",(salariofuncionario * 0.08) + (salariofuncionario * 0.04));}
    else{
        printf("\nIMPOSTO FINAL: %g", (salariofuncionario * 0.04));
    }
}
