#include <stdio.h>
#include <string.h>

struct persona{
	char nombre[50];
	char apellido[50];
	int edad;
};

int main(){
	struct persona p[3]; // Arreglo de personas
	// Persona 1
	strcpy(p[0].nombre, "Miguel");
	strcpy(p[0].apellido, "Hidalgo");
	p[0].edad = 70;
	// Persona 2
	strcpy(p[1].nombre, "Vicente");
	strcpy(p[1].apellido, "Guerrero");
	p[1].edad = 30;
	// Persona 3
	strcpy(p[2].nombre, "Jose Maria");
	strcpy(p[2].apellido, "Morelos");
	p[2].edad = 35;
	// Imprimir el contenido
	printf("\nNombre: %s", p[0].nombre);
	printf("\nApellido: %s", p[0].apellido);
	printf("\nEdad: %d", p[0].edad);
	// Imprimir el contenido
	printf("\n\nNombre: %s", p[1].nombre);
	printf("\nApellido: %s", p[1].apellido);
	printf("\nEdad: %d", p[1].edad);
	// Imprimir el contenido
	printf("\n\nNombre: %s", p[2].nombre);
	printf("\nApellido: %s", p[2].apellido);
	printf("\nEdad: %d", p[2].edad);
	
	return 0;
}
