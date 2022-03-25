#include <stdio.h>
#include <stdlib.h>
void main() {

    //o stdlib.h serve para alocar a memória.
    //void não precisa de retorno.

int soma, num1, num2;
printf("Informe o primeiro numero:");
scanf("%d", &num1);
printf("Informe o segundo numero:");
scanf("%d", &num2);

soma = num1 + num2;

printf("Resultados da soma: %d", soma);

}