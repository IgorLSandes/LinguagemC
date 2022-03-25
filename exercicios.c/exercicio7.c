#include <stdio.h>
#include <stdlib.h>
void main() {


system("clear");

int destino, trecho;
printf("Informe o destino conforme a tabela a seguir: \n\n");
printf("1- Região Norte \t 3- Região Centro-oeste \n\n");
printf("2- Região Nordeste \t 4- Região Sul \n\n");
scanf("%d", &destino);

system("clear");

printf("Informe o trecho:\n1- Ida\n2- Ida e volta\n\n");
scanf("%d", &trecho);

system("clear");

if (destino == 1) {
    if (trecho == 1)
    printf("Região norte [IDA] = $500,00\n\n");
    else
    printf("Região nordste [ IDA E VOLTA ] = $900,00\n\n");
    }
    else if (destino == 2) {
        if (trecho == 1)
        printf("Região nordeste [IDA] = $350\n\n");
    }
    else if (destino == 3) {
        if(trecho == 1)
        printf("Região centro-oeste [IDA] = $350,000\n\n");
        else 
        printf("Região centro-oeste [IDA E VOLTA] = $600,00\n\n");
    }
else if (destino == 4) {
    if(trecho == 1)
    printf("Região sul [IDA] = $350,00\n\n");
    else
    printf("Região sul [IDA E VOLTA] = $550,00\n\n");
    

    
}









}