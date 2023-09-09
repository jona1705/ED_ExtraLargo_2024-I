#include <stdio.h>

int main(){
	// Declaracion basica e inicializacion
	int arreglo[5] = {0};
	// Asignar a un apuntador el nombre del arreglo
	int * ptr = arreglo;
	// Asignar valores al arreglo
	int i;
	for(i=0; i<5; i++){
		arreglo[i] = i+1;
	}
	// Aritmetica de apuntadores
	printf("%d %d", *arreglo, *ptr);
	printf("\n%d %d", *(arreglo + 0), *(ptr + 0));
	printf("\n%d %d", *(arreglo + 1), *(ptr + 1));
	// Mover los apuntadores
	//arreglo++; // No se puede mover su referencia
	ptr++;
	printf("\n%d %d", *arreglo, *ptr);
	printf("\n%d %d", *(arreglo + 2), *(ptr + 2));
	ptr--;
	
	return 0;
}
