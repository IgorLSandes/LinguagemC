#include <stdio.h>
#include <stdlib.h>

void main() {

char produto[30];
printf("Informe o nome do produto: \n");
fgets(produto, 30, stdin);

/*
Resolução do problema do SCANF, ele permite 1, 2, 3 ou mais palavras a serem usadas
respeitando o limite designado pelo CHAR
*/

printf("Produto: %s\n", produto);



}