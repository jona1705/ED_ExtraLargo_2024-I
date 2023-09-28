#include <stdio.h>

int main(){
    int arreglo[] = {1, 2, 3, 4, 5};

    // Imprimiendo todas las direcciones
    int i, j;
    printf("\n-Direcciones de memoria del arreglo 1D: \n");
    for(i=0; i<5; i++){
		printf("\ndir(arreglo[%d]) = %p", i, &arreglo[i]);
    }

    printf("\n\n-Accediendo a las direcciones del arreglo 1D: \n");
    printf("\ndir_base(arreglo) = %p %p", arreglo, &arreglo[0]);
    printf("\ndir(arreglo[0]) = %p %p", &arreglo[0], arreglo + 0);
	printf("\ndir(arreglo[1]) = %p %p", &arreglo[1], arreglo + 1);
    printf("\ndir(arreglo[2]) = %p %p", &arreglo[2], arreglo + 2);
    printf("\ndir(arreglo[3]) = %p %p", &arreglo[3], arreglo + 3);
    printf("\ndir(arreglo[4]) = %p %p", &arreglo[4], arreglo + 4);
    
	printf("\n\n-Accediendo a los valores del arreglo 1D: \n");
    printf("\nvalor(arreglo) = %d %d", arreglo[0], *arreglo);
    printf("\nvalor(arreglo[0]) = %d %d", arreglo[0], *(arreglo + 0));
	printf("\nvalor(arreglo[1]) = %d %d", arreglo[1], *(arreglo + 1));
    printf("\nvalor(arreglo[2]) = %d %d", arreglo[2], *(arreglo + 2));
    printf("\nvalor(arreglo[3]) = %d %d", arreglo[3], *(arreglo + 3));
    printf("\nvalor(arreglo[4]) = %d %d", arreglo[4], *(arreglo + 4));
    
	printf("\n\n-Accediendo al primer valor del arreglo 1D: ");   
	printf("\nvalor(arreglo[0]) = %d %d", arreglo[0], *arreglo); 
	printf("\nvalor(arreglo[0] + 1) = %d %d", arreglo[0] + 1, *arreglo + 1);
	printf("\nvalor(arreglo[0] + 2) = %d %d", arreglo[0] + 2, *arreglo + 2);

    return 0;
}
