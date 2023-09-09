#include <stdio.h>

int main(){
	// Arreglo inicializado en 0
	int arr[3][4] = {{0}};
	// Arreglo inicializado con valores
	int arr2[2][3] = {{1, 2, 3}, {4, 5, 6}};
	// Calcular tamaño del arreglo
	int m = sizeof(arr2)/sizeof(arr2[0]); // 2
	int n = sizeof(arr2[0])/sizeof(int); // 3
	// Imprimir elementos de un arreglo
	int i, j;
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	// Arreglo 3
	int arr3[2][3] = {1, 2, 3, 4, 5, 6} 
}
