/* 

programa para calcular o resultado da situação do aluno, se esta aprovado ou reprovado
vamos levar em consideração a nota do aluno e compara-lá a média de aprovação da escola,
caso a nota do aluno seja maior que 7, então o aluno estará aprovado, caso contrário, ele estára
reprovado. 

*/

//incluir o cabeçalho de entrada e saída de dados padrão, que é o
#include <stdio.h>
//definir uma constante sempre em letras maiusculas
#define mediaescola 7.0

//iniciar o programa
int main () {
//declaração da nota do aluno com o tipo float

float notaAluno;
printf("Digite a nota do aluno e aperte *enter*\n");
scanf("%f", &notaAluno);
//desvio de fluxo com if ... else
if (notaAluno >= mediaescola){
 printf("O aluno esta aprovado!\n");


} 
else{
    printf("O aluno foi reprovado, média do aluno foi %f\n", notaAluno);

}
return 0;
}






