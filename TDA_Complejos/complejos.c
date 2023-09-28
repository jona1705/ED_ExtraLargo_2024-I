#include <stdio.h>
#include <math.h>
#include <float.h>
#include "complejos.h"

Complejos init(double a, double b){
	Complejos c;
	c.real = a;
	c.imaginaria = b;
	return c;
}

// (a+bi) + (c+di) = (a+c) + (b+d)i
Complejos suma(Complejos c1, Complejos c2){
	Complejos c;
	c.real = c1.real + c2.real;
	c.imaginaria = c1.imaginaria + c2.imaginaria;
	return c;
}

// (a+bi) - (c+di) = (a-c) + (b-d)i
Complejos resta(Complejos c1, Complejos c2){
	Complejos c;
	c.real = c1.real - c2.real;
	c.imaginaria = c1.imaginaria - c2.imaginaria;
	return c;
}

// (a+bi) * (c+di) = (ac-bd) + (ad-bc)i
Complejos multiplicacion(Complejos c1, Complejos c2){
	Complejos c;
	c.real = ((c1.real * c2.real) - (c1.imaginaria * c2.imaginaria));
	c.imaginaria  = ((c1.real * c2.imaginaria) + (c1.imaginaria * c2.real));
	return c;
}

// (a+bi) / (c+di) = ((ac+bd) / (c^2 + d^2))+ ((bc-ad) / (c^2 + d^2))i
Complejos division(Complejos c1, Complejos c2){
	Complejos c;
	double denominador = ((c2.real + c2.real) + (c2.imaginaria + c2.imaginaria));
	if(denominador == 0.0){
		c.real = DBL_MIN;
		c.imaginaria = DBL_MIN;
	} else{
		c.real = ((c1.real * c2.real) + (c1.imaginaria * c2.imaginaria)) / denominador;
		c.imaginaria  = ((c1.imaginaria * c2.real) + (c1.real * c2.imaginaria)) / denominador;
	}

	return c;
}

double modulo(Complejos c){
	double mod = sqrt((c.real * c.real) + (c.imaginaria * c.imaginaria));
	return mod;
}

void imprimir(Complejos c){
	// Imprimiendo los números complejos
	// Tener cuidado de prevenir la division entre cero
	if(c.real == DBL_MIN || c.imaginaria == DBL_MIN) printf("(ERROR) Division entre cero");
	else if(c.real == 0 && c.imaginaria == 0) printf("0 + 0i");
	else if(c.real == 0) printf("%.2lfi", c.imaginaria);
	else if(c.imaginaria == 0) printf("%.2lf", c.real);
	else if(c.imaginaria < 0) printf("%.2lf - %.2lfi", c.real, (-1) * c.imaginaria);
	else printf("%.2lf + %.2lfi", c.real, c.imaginaria);
}
