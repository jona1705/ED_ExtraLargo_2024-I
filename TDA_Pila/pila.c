#include <stdio.h>
#include "pila.h"

// La implementación de los prototipos del
// archivo pila.h

Pila crearPila(){
	Pila p;
	p.tope = -1;
	p.cont = 0;
	int i;
	for(i=0; i<MAX; i++){
		p.arr[i] = 0;
	}
	return p;
}


Pila push(Pila p, int x){
	if(p.tope == MAX-1) return p;
	p.tope = p.tope + 1; // tope++
	p.arr[p.tope] = x;
	p.cont = p.cont + 1; // cont++
	return p;
}

Pila pop(Pila p){
	if(p.tope == -1) return;
	p.tope = p.tope - 1;
	p.cont = p.cont - 1; // cont--
	return p;
}

int peek(Pila p){
	return p.arr[p.tope];
}

int size(Pila p){
	return p.cont;
}

void imprimir(Pila p){
	int i;
	if(p.tope == -1) return;
	for(i=p.tope; i>=0; i--){
		printf("%d ", p.arr[i]);
	}
	printf("\n");
}
