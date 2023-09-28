#include <stdio.h>

int main(){
    int arreglo[] = {1, 2, 3, 4, 5};

	int * p = arreglo; // p nos permite desplazarnos por el arreglo
	
    // Imprimiendo todas las direcciones
    int i, j;
    printf("\n-Direcciones de memoria del arreglo 1D: \n");
    for(i=0; i<5; i++){
		printf("\ndir(arreglo[%d]) = %p", i, &p[i]);
    }

    printf("\n\n-Accediendo a las direcciones del arreglo 1D: \n");
    printf("\ndir_base(arreglo) = %p %p", p, &p[0]);
    printf("\ndir(arreglo[0]) = %p %p", &p[0], p + 0);
	printf("\ndir(arreglo[1]) = %p %p", &p[1], p + 1);
    printf("\ndir(arreglo[2]) = %p %p", &p[2], p + 2);
    printf("\ndir(arreglo[3]) = %p %p", &p[3], p + 3);
    printf("\ndir(arreglo[4]) = %p %p", &p[4], p + 4);
    
	printf("\n\n-Accediendo a los valores del arreglo 1D: \n");
    printf("\nvalor(arreglo) = %d %d", p[0], *p);
    printf("\nvalor(arreglo[0]) = %d %d", p[0], *(p + 0));
	printf("\nvalor(arreglo[1]) = %d %d", p[1], *(p + 1));
    printf("\nvalor(arreglo[2]) = %d %d", p[2], *(p + 2));
    printf("\nvalor(arreglo[3]) = %d %d", p[3], *(p + 3));
    printf("\nvalor(arreglo[4]) = %d %d", p[4], *(p + 4));
    
	printf("\n\n-Accediendo al primer valor del arreglo 1D: ");   
	printf("\nvalor(arreglo[0]) = %d %d", p[0], *p); 
	printf("\nvalor(arreglo[0] + 1) = %d %d", p[0] + 1, *p + 1);
	printf("\nvalor(arreglo[0] + 2) = %d %d", p[0] + 2, *p + 2);

    return 0;
}
