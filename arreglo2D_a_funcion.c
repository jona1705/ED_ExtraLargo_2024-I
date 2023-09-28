#include <stdio.h>

/*Forma 1 de pasar un arreglo a una funcion
/Indicando las dimensiones del arreglo
int desplegar(int a[2][3], int m, int n){
	int i, j;
	printf("\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}*/

/* Forma 2 de pasar un arreglo a una funcion
// Omitir la primera dimension del arreglo
int desplegar(int a[][3], int m, int n){
	int i, j;
	printf("\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}*/

// Forma 3 de pasar un arreglo a una funcion
/* Primero declarar las dimensiones del arreglo como 
// parametros
int desplegar(int m, int n, int a[m][n]){
	int i, j;
	printf("\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}*/

// Forma 4 el parametro es un apuntador a un
// arreglo de 3 elementos
int desplegar(int (*p)[3], int m, int n){
	int i, j;
	printf("\n");
	for(i=0; i<m; i++){
		for(j=0; j<n; j++){
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}

int main(){
	int arr[2][3] = {
		{1, 2, 3}, {4, 5, 6}
	};
	int m = sizeof(arr) / sizeof(arr[0]); // 2
	int n = sizeof(arr[0]) / sizeof(arr[0][0]); // 3
	//printf("%lux%lu", m, n);
	int (*p)[3] = arr; // Un apuntador a un arreglo 1d de 3 elementos
	
	desplegar(arr, m, n);
	
}
