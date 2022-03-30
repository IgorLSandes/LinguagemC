/*Programa para trabalhar com funçõe, vamos usar funções com retorno sem retorno
com argumentos(parametros), sem argumentos
*/

#include <stdio.h>
#include <stdlib.h>

void separadorHT() {

for (int i = 0 ; i <= 80  ; i++){
printf("#");
}
}

void separadorLinha() {

    for(int i = 0 ; i <= 80; i++){

    printf("_");
    }
}




void comparar(int v1, int v2){

if(v1 > v2) {
printf("O primeiro número é maior que o segundo.");
}
else if(v1 < v2){
    printf("O segundo número é maior que o primeiro.");
}
else{
      printf("Os números são iguais");
}
}


void main(){ 
int n1,n2;
system("clear");
//chamando a função SEPARADORHT
separadorHT();
pularLinha(1);
printf("\n\t\tPrograma que exibe uma mensagem.\n");
pularLinha(1);
//chamando a função SEPARADORLINHA
separadorLinha();
pularLinha(2);

printf("Digite um número:");
scanf("%d", &n1);
printf("Digite outro número:");
scanf("%d", &n2);
pularLinha(1);
comparar(n1,n2);
pularLinha(1);

}

void pularLinha(int qtdVezes){
for(int i = 1 ; i<= qtdVezes; i++){
printf("\n");

}

}



