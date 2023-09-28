// INTERFAZ 

#ifndef COMPLEJOS_H
#define COMPLEJOS_H

struct complejos{
	double real;
	double imaginaria;
};

typedef struct complejos Complejos;

Complejos init(double a, double b);
Complejos suma(Complejos c1, Complejos c2);
Complejos resta(Complejos c1, Complejos c2);
Complejos multiplicacion(Complejos c1, Complejos c2);
Complejos division(Complejos c1, Complejos c2);
double modulo(Complejos c);
void imprimir(Complejos c);


#endif
