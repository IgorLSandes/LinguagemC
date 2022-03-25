#include <stdio.h>

int main() {

float valor1, valor2;
char operacao;


system("clear");


printf("\n\n                Calculadora\nDigite a operação que você deseja realizar.\n\n");
scanf("%f", &valor1);
scanf("%c", &operacao);
scanf("%f", &valor2);

switch (operacao)
{


case '+':
printf("\nRESULTADO: %.2f\n\n\n", valor1 + valor2);
    break;
case '-':
printf("\nRESULTADO: %.2f\n\n\n", valor1-valor2);
    break;
    case '/':
printf("\nRESULTADO: %.2f\n\n\n", valor1/valor2);
break;
case '*':
printf("\nRESULTADO: %.2f\n\n\n", valor1*valor2);
break;

default:
printf("\nOperação ínvalida...\n\n\n\n\n");
    break;
}
    return 0;
}