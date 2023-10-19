#ifndef _PILA_H
#define _PILA_H
#define MAX 10

struct pila{
	int arr[MAX];
	int tope;
	int cont;
};

typedef struct pila Pila;

Pila crearPila();
Pila push(Pila, int);
Pila pop(Pila);
int peek(Pila);
int size(Pila);
void imprimir(Pila);

#endif
