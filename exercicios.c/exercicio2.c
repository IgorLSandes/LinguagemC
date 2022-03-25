#include <stdio.h>
#include <stdlib.h>

void main() {

char produto[30];
printf("Informe o nome do produto: \n");
scanf("\n%[^\n]s", &produto);

//ESSE COMANDO NO SCANF FUNCIONA PARA NOMES COMPOSTO, OU SEJA COM MAIS DE 2 PALAVRAS

printf("Produto: %s\n", produto);



}