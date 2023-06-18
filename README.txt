Universidade Federal Fluminense
Disciplina: Métodos Númericos I
Professor: Aquino Lauri de Espindola
Aluna: Ayodele Dias de Oliveira
Data de entrega: 19/06/2023


In the project, we are asked to find the roots by the 4 methods presented in the classroom by the teacher, the methods being: Bisection Method, Regular-Falsi, Newton, Secant.

****Bisection's Method****

We have to check if the root is between a and b;

a = beginning the interval
b = end the interval
Xn = (a+b)/2;

f(a)*f(b) to check if it is between these two numbers

f(a) * f(xn) = positive;

f(b) * f(xn) = negative; (is between this interval, because there was a change of sign)

if this occurs a must assume the value of xn;
**** Newton's method****

  Choose a point X1 as an estimate of the solution.
   X2 is obtained from the intersection with the axis of line tan a x at the point (x1, f(x1))
 f'(x1)(derivative at the point) = (f(x1) - 0)/ x2- x1;

x(i+1) = (xi - f(xi))/f'(xi);

****Regula-Falsi's method****

1. start

2. Define function f(x)

3. Choose initial guesses x0 and x1 such that f(x0)f(x1) < 0

4. Choose pre-specified tolerable error e.

5. Calculate new approximated root as: 
   
   x2 = x0 - ((x0-x1) * f(x0))/(f(x0) - f(x1))

6. Calculate f(x0)f(x2)
	a. if f(x0)f(x2) < 0 then x0 = x0 and x1 = x2
	b. if f(x0)f(x2) > 0 then x0 = x2 and x1 = x1
	c. if f(x0)f(x2) = 0 then goto (8)
	
7. if |f(x2)|>e then goto (5) otherwise goto (8)

8. Display x2 as root.

9. Stop

*****Secants Method****
The idea is to follow the secant line to its intersection with the x-axis and use the point
found as an approximation to the root.
This is similar to Newton's method (which follows the tangent line).
The great advantage of the secant method over the Newton-Raphson method is that it does not require the function f(x) to be differentiable and the algorithm does not need to compute the derivative. This is a facilitator since sometimes the derivatives can only be estimated.



Notes about the project:
The function_arq.h file is a file containing functions necessary to implement the functions of the presented methods;

The bisection.h file is the file that contains the algorithm for the Bisection Method, as the name already indicates;

The newton.h file is the file that contains the algorithm for Newton's Method, as the name already indicates;

The secant.h file, is the file that contains the algorithm for the Secant Method, as the name already indicates;

The regular.h file is the file that contains the algorithm for the Regular-Falsi Method, as the name already indicates;