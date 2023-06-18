#include <stdio.h>
#include <math.h>

#define ERRO 1e-4

  double Xn; 
double bisection(double x, double y)
{
    //testing the shot, verifying the root
    if(function(x) == 0.0 || function(y) == 0.0)
	  {
			if(function(x) == 0.0)
				 printf("O valor %2lf é raiz da função", x );
			else
				 printf("O valor %2lf é raiz da função", y);
	  }
    
    /*checking that the root case wasn't on the first shot*/
	 if(root_int(x,y))
   {
		do
		{
			Xn = (x+y)/2.0;
			// on the left of Xn 
			if(function(x) * function(Xn) < 0.0)
				y = Xn;
			else // on the right of Xn:
				x = Xn;
		}
		while( fabs(function(Xn)) > ERRO);/*The funtion module < Error*/
    
	}

  return Xn;
}