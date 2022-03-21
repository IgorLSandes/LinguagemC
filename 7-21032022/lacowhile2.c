/*
Programa para manter a tela sempre ativa. caso 
o usuario digite 9, então a tela será
liberado
*/

#include <stdio.h>
int main(){
int op = 0;
printf("Digite um número para sair e tecle enter.");
scanf("%d", &op);
while(op !=9){
    system("clear");
    printf("\nVocê ERROUU!!");
    printf("\nTente outra vez\n");
scanf("%d", &op);
}

    return 0;
}