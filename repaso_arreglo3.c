#include <stdio.h>

// Un arreglo bidimensional es un arreglo de arreglos 1D

int main(){
	int arr[3][4] = {
		{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
		//  a[0]           a[1]           a[2]
	};
	
	printf("%p", arr);
	printf("\n%p %p", arr[0], arr+0);  // dir(arr[0])
	printf("\n%p %p", arr[1], arr+1);  // dir(arr[1])
	printf("\n%p %p", arr[2], arr+2);  // dir(arr[2])
	
	// Usando un apuntador a un arreglo podemos desplazarnos
	// por los elementos de un arreglo 2D
	int (*ptr)[4] = arr;
	
	printf("\n%p", ptr+0);  // dir(arr[0])
	printf("\n%p", ptr+1);  // dir(arr[1])
	printf("\n%p", ptr+2);  // dir(arr[2])
	
	// Referenciando la direccion arr[1][2]
	printf("\n%p %p", arr[1]+2, (arr+1)+2);  // dir(arr[1][2])
	printf("\n%p", (ptr+1)+2);  // dir(arr[1][2])
	
}
