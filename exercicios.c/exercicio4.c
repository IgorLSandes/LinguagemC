/*
Programa ultilizado para o usuário digitar um número e o mesmo detectar se o número digitado
pelo usuário é maior que 20 ou não, caso for maior o programa irá dar um retorno, caso contrário 
o programa ira aprovar o número
*/

#include <stdio.h>
#include <stdlib.h>

void main() {

int num;

printf("Informe o numero");
scanf("%d", &num);

if(num > 20)
printf("Maior que 20");

}