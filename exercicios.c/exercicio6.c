#include <stdio.h>
#include <stdlib.h>
void main () {

char nome[30];
int idade, bemAlimentado, resfriado;
float peso;

printf("Informe o nome:\n");
scanf("%s", &nome);
printf("Informe o peso:\n");
scanf("%f", &peso);
printf("Qual a sua idade %s?\n", nome);
scanf("%d", &idade);
printf("Você esta bem alimentado?\n <1-SIM / 0-NÃO>\n");
scanf("%d", &bemAlimentado);
printf("Você esta resfriado?\n <1-SIM / 0-NÃO>\n");
scanf("%d", &resfriado);

system("clear");

if (peso >=  50 && (idade >= 16 && idade <= 69)
&& bemAlimentado && !resfriado)
printf("\n\n\nO voluntário %s está apto!\n\n\n\n\n\n\n\n", nome);
else
printf("\n\n\nO voluntário %s não está apto!\n\n\n\n\n\n\n\n", nome);

return 0;
}