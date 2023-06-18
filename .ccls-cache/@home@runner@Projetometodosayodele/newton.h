#include <stdio.h>
#include <math.h>


#define ERRO 1e-4


//newton's method
double newton_met(double x){
  double x_1;
  
  do {
    if (derivative_function(x) != 0.0) {
      x_1 = x - function(x) / derivative_function(x); 
      x = x_1;
    } 
    
    if(derivative_function(x) == 0.0)
    {
      printf("A função não é contínua naquele ponto!\n\n");
      break;
    }
    
  } while (fabs(function(x)) > ERRO);

  return x_1;
}
