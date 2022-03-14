#include <stdio.h> //Biblioteca standart de Input/Output
#define PI 3.14159

int main() 
{

float raio, area;
printf("Digite o valor do raio do circulo e enter\n");
scanf("%f", &raio);
printf("Raio digitado é %12.2f\n", raio);
area= PI * raio * raio;
printf("Area do circulo com raio %f é %f\n", raio, area);
return 0;

}
