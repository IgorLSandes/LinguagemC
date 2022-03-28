#include <stdlib.h>
#include <stdio.h>
void main() {

int x = 0;
int* px = &x;
while (x < 10){
printf("%p tem o valor da %d\n", px, *px);
x++;

}
}