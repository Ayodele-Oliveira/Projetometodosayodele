#include <stdio.h>
#include <math.h>

//files inclusion
#include "function_arq.h"
#include "bisection_func.h"
#include "newton.h"
#include "secant.h"
#include "regular.h"

int i = 0;

int main() {
  //interval [a,b]
  double a = 1;
  double b = M_PI;
 
  
  int choice; //choice of method

  printf("Este é um programa para encontrar raíz da função f(x)= 8 - 4,5(x - sen(x)). Por favor, escolha um dos métodos abaixo:\n1- Bisseção;\n2- Newton;\n3- Secante;\n4- Regular-False\n");
  scanf("%d", &choice);

  switch(choice)
  {
    case (1):
      printf("\n\nA raíz pelo método da bisseção é %lf.\n\n", bisection(a,b));
      break;
    case (2):
      printf("\n\nA raíz pelo método de Newton é %lf.\n\n", newton_met(a));
      break;
    case (3):
      printf("\n\nA raíz pelo método da Secante é %lf.\n\n", secant_meth(a,b));
      break;
    case 4:
      printf("\n\nA raíz pelo Método Regular-Falsi é %lf.\n\n", regular_falsi(a,b));
      break;
    default:
      printf("\nOPÇÃO ESCOLHIDA INVÁLIDA!\n");
  }
  
}