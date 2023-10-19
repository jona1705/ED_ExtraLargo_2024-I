#include <stdio.h>
#include "pila.h"

int main(){
	Pila p1 = crearPila();
	p1 = push(p1, 9);
	p1 = push(p1, 8);
	p1 = push(p1, 7);
	p1 = push(p1, 3);
	p1 = push(p1, 1);
	p1 = push(p1, -3);
	imprimir(p1);
	printf("Valor en el tope de la pila: %d", peek(p1));
	printf("\nElementos en la pila: %d\n", size(p1));
	p1 = pop(p1);
	p1 = pop(p1);
	imprimir(p1);
	printf("Valor en el tope de la pila: %d", peek(p1));
	printf("\nElementos en la pila: %d\n\n", size(p1));
	
	Pila p2 = crearPila();
	p2 = push(p2, 9);
	p2 = push(p2, 4);
	p2 = push(p2, 2);
	p2 = push(p2, 7);
	p2 = push(p2, -5);
	p2 = push(p2, -8);
	imprimir(p2);
	printf("Valor en el tope de la pila: %d", peek(p2));
	printf("\nElementos en la pila: %d\n", size(p2));
	p2 = pop(p2);
	p2 = pop(p2);
	imprimir(p2);
	printf("Valor en el tope de la pila: %d", peek(p2));
	printf("\nElementos en la pila: %d", size(p2));
	
	return 0;
}
