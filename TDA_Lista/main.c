#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

int main(int argc, char *argv[]) {
	
	// Creando una Lista 1
	printf("\nLista 1: ");
	Lista l1 = inicializar();
	desplegar(l1);
	// Insertando al final
	l1 = insertar(l1, 4.5);
	l1 = insertar(l1, 7.8);
	l1 = insertar(l1, -5.3);
	desplegar(l1);
	// Insertando en una posicion especifica
	l1 = insertar_en(l1, 1, 234.7);
	desplegar(l1);
	// Borrando al final
	l1 = borrar(l1);
	desplegar(l1);
	// Borrando en una posicion especifica
	l1 = borrar_en(l1, 1);
	desplegar(l1);
	
	// Creando una Lista 1
	printf("\nLista 2: \n");
	Lista l2 = inicializar();
	// Insertando al final
	l2 = insertar(l2, 4.5);
	l2 = insertar(l2, 7.8);
	l2 = insertar(l2, -5.3);
	l2 = insertar(l2, 7.9);
	l2 = insertar(l2, 8.5);
	l2 = insertar(l2, -11.9);
	l2 = insertar(l2, 4.9);
	l2 = insertar(l2, 8.9);
	l2 = insertar(l2, -14.9);
	desplegar(l2);
	// Ordenando elementos
	printf("\nLista 2 ordenada: \n");
	l2 = ordenar(l2);
	desplegar(l2);
	
	// Buscando un elemento
	if(buscar(l2, 8.9) != -1){
		printf("\nElemento se encuentra en la lista\n");
	} else{
		printf("\nElemento no se encuentra en la lista\n");
	}
		
	return 0;
}
