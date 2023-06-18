#include <stdio.h>
#include <math.h>


#define ERRO 1e-4
/*Calculatig the given fuction*/
float function(float number)
{
  float functio_sin;
  functio_sin = 8.0 - 4.5 * (number - sin(number));

  return functio_sin;
}

//Checking if the root is in the interval
int root_int(float interval_a, float interval_b)
{
	if(function(interval_a)*function(interval_b) <0)
		return 1;
	else
		return 0;
}

float Xn;

float bisection(float a, float b)
{
    //testing the shot, verifying the root
    if(function(a) == 0 || function(b) == 0)
	  {
			if(function(a) == 0)
				 printf("O valor %2f é raiz da função", a );
			else
				 printf("O valor %2f é raiz da função", b);
	  }
    
    /*checking that the root case wasn't on the first shot*/
	 if(root_int(a,b))
   {
		do
		{
			Xn = (a+b)/2.0;
			// on the left of Xn 
			if(function(a) * function(Xn) < 0)
				b = Xn;
			else // on the right of Xn:
				a = Xn;
		}
		while( fabs(function(Xn)) > ERRO);/*The funtion module < Error*/
    
	}

  return Xn;
}