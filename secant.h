#include <stdio.h>
#include <math.h>

#define ERRO 1e-4
#define MAX 10



double secant_meth(double x0, double x1) {
	int k;
	
    double xn, x2;
    if (fabs(function(x0))<ERRO){
    	xn  = x0;
    	printf("Valor da raiz encontrada: %lf \n",xn);
    	return xn;
    }
    if (fabs(function(x1))<ERRO){
    	xn  = x1;
    	
    	return xn;
    }
    k = 1;
    while (k <= MAX) {

    	x2 = calculatingX2 (x0, x1);
        
        if(fabs(function(x0))<ERRO||fabs(x1-x0)<ERRO){
        	xn = x2;
        	return xn;
        }
        x0 = x1;
        x1 = x2;
        k+=1;
    }


	return 0;
}