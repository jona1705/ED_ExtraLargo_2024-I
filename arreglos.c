#include <stdio.h>

int main(){
	// Declaracion basica e inicializacion
	int arreglo[5];
	// Forma 1 de inicializacion
	int i;
	for(i=0; i<5; i++){
		arreglo[i] = i+1;
	}
	
	// Inicializacion 2
	int arreglo2[5] = {0};
	
	// Asignarle valores al arreglo
	arreglo2[3] = 4;
	
	// Recorrer un arreglo
	for(i=0; i<5; i++){
		printf("%d ", arreglo2[i]);
	}
	
	return 0;
}
