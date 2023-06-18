#include <stdio.h>
#include <math.h>
double x_1;

#define ERRO 1e-4


//newton's method
double newton_met(double x){
  do {
    if (derivative_function(x) != 0.0) {
      x = x - function(x) / derivative_function(x);
     
    } 
    if(derivative_function(x) == 0.0)
      printf("A função não é contínua naquele ponto!\n\n");
      break;
  } while (fabs(function(x)) > ERRO);

  return x_1;
}
