#include <stdio.h>

int main(){
	int a = 6; // Asignacion
	// Apuntador
	int * p = &a; // p almacena la direccion de a
	
	// Doble apuntador
	int ** dp = &p; // dp almacena la direccion de p (apuntador)
	
	// Imprimir informacion
	printf("%d %d %d", a, *p, **dp); // Acceso a la variable a
	printf("\n%p %p %p", &a, p, *dp); // Acceso a la direccion de a
	printf("\n%p %p", &p, dp); // Imprimir la direccion de p
	printf("\n%p", &dp); // Imprimir la direccion de dp
	
	return 0;
}
