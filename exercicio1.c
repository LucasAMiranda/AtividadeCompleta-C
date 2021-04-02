#include <stdio.h>
#include <math.h>

int main(void) {
  int num1, num2;
  int soma, subtracao, multiplicacao, quociente;
  int potenciacao, raiz_1, raiz_2;

  printf("Digite o primeiro  número: \n");
  scanf("%i", &num1);
  printf("Digite o segundo número: ");
  scanf("%i", &num2);

  soma = num1 + num2;

  subtracao = num1 -num2;

  multiplicacao = num1 * num2;
  
  quociente = num1 % num2;

  potenciacao = pow(num1, 2);

  raiz_1 = sqrt(num1);

  raiz_2 = sqrt(num2);

  printf("soma = %i", soma);
  printf("subtracao = %i", subtracao);
  printf("multiplicacao = %i", multiplicacao);
  printf("quociente = %i", quociente);
  printf( "Potenciação: %i", potenciacao);
  printf("A raiz quadrarda do primeiro é : %i", raiz_1);
  printf("A raiz quadrarda do segundo é : %i", raiz_2);

  return 0;
} 