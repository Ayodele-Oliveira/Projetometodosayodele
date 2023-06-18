#include <stdio.h>
#include <math.h>

/*Calculatig the given fuction*/
float function(float number)
{
  float functio_sin;
  functio_sin = 8.0 - 4.5 * (number - sin(number));

  return functio_sin;
}