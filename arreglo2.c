#include <stdio.h>

void imprimir(int arr[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}

void funcion(int arr[]){
	// WARNING: Dentro de una funcion
	// no podemos calcular el tamaño de un arreglo
	// El nombre de un arreglo decae a un apuntador
	int n = sizeof(arr)/sizeof(int); 
	printf("\nn=%d", n);
}

int main(){
	// Declaracion basica e inicializacion
	int arreglo[5] = {0};
	// Capturar el numero de elementos del arreglo
	// sizeof calcula el numero de bytes del dato
	// que recibe como parametro
	int n = sizeof(arreglo)/sizeof(int); 
	// Llamando a la funcion
	imprimir(arreglo, n);

	funcion(arreglo);
	
	return 0;
}
