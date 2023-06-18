#include <stdio.h>
#include <math.h>

#define ERRO 1e-4
#define MAX 5



double secant_meth(double x_beg, double x_one)
{
  int k = 0;
  double x_two, x_final;

  //checking if the first values are roots
  if (fabs(function(x_beg))< ERRO)
  {
    	x_final  = x_beg;
    	return x_final;
  }
  
  if (fabs(function(x_one))< ERRO)
  {
    	x_final = x_one;
    	return x_final;
  }
  k = 1;
  
  //finding the roots
  while(k <= MAX) 
  {
    
    x_two = calculating_x2(x_beg, x_one);
    
  x_two=x_one-funcao(x_one)*((x_one-x_beg)/(funcao(x_one)-funcao(x_beg)));
   if(fabs(function(x_beg))< ERRO || fabs(x_one-x_beg)< ERRO)
    {
      x_final = x_two;
      printf("\n\nA quantidade de iterações é: %d.\n\n", k);
      return x_final;
    }
    
    x_beg = x_one;
    x_one = x_two;
    k++;
}
}