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

void main(){ 
system("clear");
//chamando a função SEPARADORHT
separadorHT();
printf("\n\t\tPrograma que exibe uma mensagem.\n");
//chamando a função SEPARADORLINHA
separadorLinha();
printf("\n\n");

}



