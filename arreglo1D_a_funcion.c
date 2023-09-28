#include <stdio.h>

/*
Forma 1 de pasar un arreglo a una funcion
Indicando la dimension del arreglo
void desplegar(int a[5], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}*/

/*
Forma 2 de pasar un arreglo a una funcion
Omitiendo la dimension del arreglo
void desplegar(int a[], int n){
	int i;
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}*/

// Forma 3 de pasar un arreglo a una funcion
// El parametro es un apuntador
void desplegar(int * a, int n){
	int i;
	printf("\n");
	for(i=0; i<n; i++){
		printf("%d ", a[i]);
	}
}

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int n1 = sizeof(arr)/sizeof(arr[0]); // 5
	//printf("%lu", n);
	desplegar(arr, n1);
	
	// Declarando otro arreglo
	int arr2[] = {1, 2, 3, 4, 5};
	int * p = arr2;
	int n2 = sizeof(arr2)/sizeof(arr2[0]); // 5
	desplegar(p, n2);
	
	//int arr3[]; INVALIDO
	
	printf("\np[2] = %d", p[2]);
}

