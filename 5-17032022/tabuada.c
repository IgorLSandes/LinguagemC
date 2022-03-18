//Programa para calcular a tabuada de acordo com a entrada do úsuario

#include <stdio.h>

int main(){

int m; 
int multiplo;

system("clear");
printf("Digite um número para a tabuada e tecle enter.\n");
scanf("%d", &m);

for(multiplo = 0; multiplo <=10 ; multiplo++){
printf("%d x %d = %d\n", m, multiplo, (m*multiplo));
}
return 0;
}
