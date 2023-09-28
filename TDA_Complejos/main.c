#include <stdio.h>
#include <stdlib.h>
#include "complejos.h"

int main(int argc, char *argv[]) {

	double a = 5.6;
	double b = 7.2;
	Complejos c1 = init(a, b);
	printf("\nNumero Imaginario 01: ");
	imprimir(c1);
	printf("\nNumero Imaginario 02: ");
	Complejos c2 = init(5.9, -3.7);
	imprimir(c2);
	
	// Probando suma y resta
	Complejos s = suma(c1, c2);
	printf("\n\nSuma de c1 y c2: ");
	imprimir(s);
	printf("\nResta de c1 y c2: ");
	Complejos r = resta(c1, c2);
	imprimir(r);
	
	// Probando multiplicacion y division
	Complejos m = multiplicacion(c1, c2);
	printf("\n\nMultiplicacion de c1 y c2: ");
	imprimir(s);
	Complejos d = division(c1, c2);
	printf("\nDivision de c1 y c2: ");
	imprimir(r);
	
	return 0;
}
