#include <stdio.h> 
#include <math.h>

  float num, arrendodarBaixo, arrendodarCima;

  int main(void){

  printf("Digite o primeiro  número: \n");
  scanf("%f", &num);

  arrendodarBaixo = floor(num);
  arrendodarCima =  ceil(num);

  printf("Arrendodar para baixo = %f", arrendodarBaixo);

  printf("Arrendodar para Cima = %f", arrendodarCima);

  return 0;

}