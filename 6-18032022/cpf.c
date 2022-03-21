//Programa para validar o CPF do usúario usando calculos!
#include <stdio.h>

int main(){
int peso10 = 10;
int peso11 = 11;
int total = 0;
int resto = 0;
char cpf[11];

system("clear");
printf("Digite o seu CPF sem o dígito.\n");
scanf("%s", cpf);


/*
converter todos os caractéres do cpf para números
para isso devemos criar um conjunto de números em tipo int e devemos realizar a conversão no tipo
for
*/

int icpf[11];

for (int x = 0 ; x <=10; x++){
    icpf[x] = cpf[x] - 48;
}

for (int i = 0; i <= 8; i++){
total += icpf[i]*peso10;
peso10--;
}

resto = total % 11;
//se o resto da divisão for menor que 2, então o primeiro digito de verificação será 0

if(resto < 2){
icpf[9] = 0;
}
else{
icpf[9] = 11 - resto;
}


total = 0;
resto = 0;

for(int i = 0 ; i <= 9 ; i++){
total += icpf[i]*peso11;
peso11--;
}
resto = total % 11;
if(resto < 2){
    icpf[10] = 0;
}
else{
icpf[10] = 11-resto;
}
 for(int i = 0 ; i <= 10 ; i++){
     printf("%d", icpf[i]);
 }
return 0;
}






  
