#include <stdio.h>
#include <stdbool.h>
#include "lista.h"

Lista inicializar(){
	Lista l;
	int i;
	for(i=0; i<MAX; i++){
		l.arr[i] = 0.0;
	}
	l.len = 0;
	return l;
}

// Funcion auxiliar para validar que el arreglo
// esta vacio
static bool esVacia(Lista l){
	return l.len == 0;
}

// Funcion auxiliar para validar que el arreglo
// esta vacio
static bool esLlena(Lista l){
	return l.len == MAX;
}

// Funcion auxiliar para intercambiar dos valore
// de la lista
static void intercambiar(double * a, double * b){
	double temp = *a;
	*a = *b;
	*b = temp;
}

void desplegar(Lista l){
	int i;
	for(i=0; i<l.len; i++){
		printf("%.2lf ", l.arr[i]);
	}
	printf("\n");
}

// Esta funcion inserta un elemento 
// al final de la Lista
Lista insertar(Lista l, double x){
	if(esLlena(l)){
		printf("[] Lista Llena ...\n");
	} else {
		l.arr[l.len] = x;
		l.len++;
	}	
	return l;
}

// Esta funcion inserta un elemento 
// en una posicion especifica de la Lista
Lista insertar_en(Lista l, int pos, double x){
	if((pos>l.len) || (pos>MAX) || (pos<0)){
		printf("[ERROR] Indice fuera de rango ...\n");
	} else if(esLlena(l)){
		printf("[] Lista Llena ...\n");
	} else{
		int i;
		for(i=l.len; i>=pos; i--){
			l.arr[i+1] = l.arr[i];
		}
		l.arr[pos] = x;
		l.len++;
	}
			
	return l;
}

// Esta funcion borra un elemento 
// al final de la Lista
Lista borrar(Lista l){
	if(esVacia(l)){
		printf("[] Lista Vacia ...\n");
	} else{
		l.len--;
	}
	return l;
}

// Esta funcion borra un elemento 
// en una posicion especifica de la Lista
Lista borrar_en(Lista l, int pos){
	if((pos>l.len) || (pos>MAX) || (pos<0)){
		printf("[ERROR] Indice fuera de rango ...\n");
	} else if(esVacia(l)){
		printf("[] Lista Vacia ...\n");
	} else{
		int i;
		for(i=pos; i<l.len; i++){
			l.arr[i] = l.arr[i+1];
		}
		l.len--;
	}
	return l;
}

// Funcion que busca un valor
// usando el algoritmo de busqueda lineal
int buscar(Lista l, double x){
	if(!esVacia(l)){
		// Busqueda lineal
		int i;
		for(i=0; i<l.len; i++){
			if(l.arr[i] == x) return i;
		}
	}
	return -1;
}

// Funcion que ordena una lista
// usando el algoritmo de la burbuja
Lista ordenar(Lista l){
	if(!esVacia(l)){
		// Algoritmo de la burbuja
		int paso, iteracion;
		for(paso=0; paso<l.len-1; paso++){
			for(iteracion=0; iteracion<l.len-1; iteracion++){
				if(l.arr[iteracion] > l.arr[iteracion+1]){
					intercambiar(&l.arr[iteracion], &l.arr[iteracion+1]);
				}
			}
		}
	}
	
	return l;
}
