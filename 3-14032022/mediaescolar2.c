/*programa para calcular a situação do aluno, neste programa teremos as seguintes saidas
-aprovado quando nota >= 7
*reprovado quando nota <=  4
*recuperação >4 e < 7
*/

#include <stdio.h>
#define APROVE 7.0
#define REPROVE 4.0

int main() {

float na;
printf("digite a nota do aluno!\n");
scanf("%f", &na);

if (na >= APROVE){

    printf("Parabéns, você foi aprovado!\n");
}

if (na <= REPROVE){
    printf("Infelizmente, vocẽ foi reprovado!\n");
}

else{
    
printf("Você esta na recuperação!\n");

}
return 0;
}

