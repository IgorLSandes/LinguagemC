#include <stdio.h>

int main(){

int qtd = 0;
int ano;
    
    
    for(ano = 1950; ano <= 2022; ano++){

if(ano % 4 == 0){
printf("\n%d é bissexto!\n", ano);
qtd++;

    }
    }
    printf("\nEncontramos **%d** anos bissextos!\n", qtd);
    return 0;
}
