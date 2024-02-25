#include <stdio.h>
int main(){
    int dep = 3;
    int nFuncionarios = 0;
    int ttFuncionarios = 0;
    float salario = 0;
    float ttSalario = 0;
    float maiorSalario = 0;
    float menorSalario = 0;
    int depMaiorSalario = 0;
    int depMenorSalario = 0;
    float porcentagemSalario = 0;
    while (dep > 0){
        printf("Digite a quantidade de funcionarios do departamento numero : %i\n", dep);
        scanf("%i", &nFuncionarios);
        ttFuncionarios = ttFuncionarios + nFuncionarios;
        while (nFuncionarios > 0){
            printf("Digite o salario do funcionario numero %i: \n", nFuncionarios);
            scanf("%f", &salario);
            if (salario > maiorSalario){
                maiorSalario = salario;
                depMaiorSalario = dep;
            }
            if (menorSalario == 0){
                menorSalario = salario;
                depMenorSalario = dep;
            }
            if(salario < menorSalario){
                menorSalario = salario;
                depMenorSalario = dep;
            }
            if(salario < 2000){
                porcentagemSalario++;
            }
            ttSalario = ttSalario + salario;
            nFuncionarios--;
        }
        printf("Total de salario do departamento numero %i = %.2f\n", dep, ttSalario);
        ttSalario = 0;
        dep--;
    }
    printf("Maior salario = %.2f pertencente do departamento = %i\n", maiorSalario, depMaiorSalario);
    printf("Menor salario = %.2f pertencente do departamento = %i\n", menorSalario, depMenorSalario);
    porcentagemSalario = ((porcentagemSalario / ttFuncionarios)*100);
    printf("Porcentagem de funcionarios com salario menor de 2000 = %.2f%%", porcentagemSalario);
return 0;
}

