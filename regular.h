#include <stdio.h>
#include <math.h>

#define ERRO 1e-4

double regular_falsi(double x, double x_one)
{
  float x2, func2, func1, func0;

  func0 = function(x);
  func1 = function(x_one);
  
  /* Checking whether given guesses brackets the root or not. */
	 if( func0*func1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  return 0;
	 }
   do
	 {
		  x2 = x - (x-x_one) * function(x)/(function(x)-function(x_one));
     
		  func2 = function(x2);

		
		  if(func0*func2 < 0)
		  {
			   x_one = x2;
			   func1 = func2;
		  }
		  else
		  {
			   x = x2;
			   func0 = func2;
		  }
		 
	
	 }while(fabs(func2) > ERRO);

  return x2;
}
