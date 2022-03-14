/*

programa para calcular o desconto de funcionarios se o funcionário tiver um salário maior que
5000.00, ele terá 5% de desconto

*/
#include <stdio.h>
#define limite 5000.00

int main() {

float salarioFuncionario;
printf("Digite o salário do funcionário e tecle enter!\n");
scanf("%f", &salarioFuncionario);


if (salarioFuncionario > limite){
printf("O funcionário terá o desconto de %2.f\n", (salarioFuncionario*0.05));
printf("O valor final é %2.f\n", salarioFuncionario - (salarioFuncionario*0.05));
}
else{
printf("O funcionário não terá desconto!\n");

}
return 0;
}