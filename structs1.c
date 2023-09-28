#include <stdio.h>
#include <string.h>

struct persona{
	char nombre[50];
	char apellido[50];
	int edad;
};

int main(){
	struct persona p1;
	strcpy(p1.nombre, "Miguel");
	strcpy(p1.apellido, "Hidalgo");
	p1.edad = 20;
	// Imprimir el contenido
	printf("\nNombre: %s", p1.nombre);
	printf("\nApellido: %s", p1.apellido);
	printf("\nEdad: %d", p1.edad)
	;
}
