#include <stdio.h>
#include <stdlib.h>

typedef struct punto{
	int x;
	int y;	
} Punto;

int main(){
	Punto p1; 
	Punto * p2 = NULL; // NULL indica que no apuntamos a nada válido
	// Usando p1
	p1.x = 5;
	p1.y = 6;
	// Usando p2
	p2 = (Punto *) malloc(sizeof(Punto));
	p2->x = 5;
	p2->y = 6;
	// Imprimir contenido
	printf("P1 = (%d, %d)", p1.x, p1.y);
	printf("\nP2 = (%d, %d)", p2->x, p2->y);
	// Liberar memoria
	free(p2);
}
