#include <stdio.h>

int main(){
	int arr[20] = {0}; 
	// Tomando el nombre del arreglo como referencia
	// a la direccion base del arreglo podemos
	// desplazarnos por el arreglo
	printf("%p", arr); // direccion base de arr
	printf("\n%p", arr+1); // direccion arr + 1
	
	// Pero no es posible cambiar la referencia 
	// a la que apunta arr (el nombre del arreglo)
	// arr = arr + 1; // arr++; // ERROR
	
	// Un apuntador puede acceder a un arreglo
	// y desplazarse tambien por el 
	int * p = arr;   
	p = p + 1; // A diferencia de arr la variable p puede modificar su referencia
	printf("\n%p", p); // dir(p[1])
	
	return 0;
}
