/* 
Programa para estudar um pouco sobre o ponteiro.
Este será o nosso primeiro exemplo
*/

#include <stdlib.h>
#include <stdio.h>
void main() {

int valor = 50;
int* pValor = &valor;

printf("\n\nValor é:%d\n\nposição da memória é %p\n\n", valor, pValor);

}