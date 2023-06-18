#include <stdio.h>
#include <math.h>

/*Calculatig the given fuction*/
double function(double number)
{
  double functio_sin;
  functio_sin = 8.0 - 4.5 * (number - sin(number));

  return functio_sin;
}

//Checking if the root is in the interval
int root_int(double interval_a, double interval_b)
{
	if(function(interval_a)*function(interval_b)<0)
		return 1;
	else
		return 0;
}
//calculating x_two for the Secant Method
double calculatingX2(double x0,double x1){
    double x2;
    x2 = x1-(function(x1)/(function(x1)-function(x0)))*(x1-x0);
    return x2;
}

//derivative of the function
double derivative_function(double number)
{
  
  return (-4.5+(4.5*cos(number)));
}