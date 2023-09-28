#include <stdio.h>
#include <stdlib.h>
#include "prueba.h"

int main(int argc, char *argv[]) {
	int op;
	float of;
	// Invocando a las funciones de prueba.h
	op = suma(3, 4);
	printf("op=%d", op);
	op = resta(3, 4);
	printf("\nop=%d", op);
	op = multiplicacion(3, 4);
	printf("\nop=%d", op);
	of = division(3, 4);
	printf("\nop=%.2f", of);
	op = modulo(3, 4);
	printf("\nop=%d", op);
	op = potencia(2, 6);
	printf("\nop=%d", op);
	of = raiz2(81);
	printf("\nop=%.2f", of);
	
	return 0;
}
