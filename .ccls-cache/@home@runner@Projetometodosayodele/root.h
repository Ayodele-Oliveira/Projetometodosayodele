#include <stdio.h>
#include <math.h>

#include "function.h"

//Checking if the root is in the interval
int root_int(float interval_a, float interval_b)
{
	if(function(interval_a)*function(interval_b) <0)
		return 1;
	else
		return 0;
}