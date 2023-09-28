#include <stdio.h>

int main(){
    int arreglo[3][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
    };

    // Imprimiendo todas las direcciones
    int i, j;
    printf("\n- Direcciones de memoria del arreglo 2D: \n");
    for(i=0; i<3; i++){
        for(j=0; j<4; j++){
                printf("\ndir(arreglo[%d][%d]) = %p", i, j, &arreglo[i][j]);
        }
    }

    printf("\n\n-Accediendo a los arreglos 1D del arreglo 2D: \n");
    printf("\ndir_base(arreglo) = %p %p", arreglo, arreglo[0]);
    printf("\ndir(arreglo[0]) = %p %p %p", arreglo + 0, arreglo[0], *(arreglo + 0));
    printf("\ndir(arreglo[1]) = %p %p %p", arreglo + 1, arreglo[1], *(arreglo + 1));
    printf("\ndir(arreglo[1]) = %p %p %p", arreglo + 2, arreglo[2], *(arreglo + 2));

    printf("\n\n-Accediendo a los elementos del arreglo 1D del arreglo 2D: \n");
    printf("\ndir(arreglo[0][0]) = %p %p", &arreglo[0][0], *(arreglo + 0) + 0);
    printf("\ndir(arreglo[0][1]) = %p %p", &arreglo[0][1], *(arreglo + 0) + 1);
    printf("\ndir(arreglo[0][2]) = %p %p", &arreglo[0][2], *(arreglo + 0) + 2);
    printf("\ndir(arreglo[0][0]) = %p %p", &arreglo[0][3], *(arreglo + 0) + 3);
    printf("\ndir(arreglo[1][0]) = %p %p", &arreglo[1][0], *(arreglo + 1) + 0);
    printf("\ndir(arreglo[1][1]) = %p %p", &arreglo[1][1], *(arreglo + 1) + 1);
    printf("\ndir(arreglo[1][2]) = %p %p", &arreglo[1][2], *(arreglo + 1) + 2);
    printf("\ndir(arreglo[1][3]) = %p %p", &arreglo[1][3], *(arreglo + 1) + 3);
    printf("\ndir(arreglo[2][0]) = %p %p", &arreglo[2][0], *(arreglo + 2) + 0);
    printf("\ndir(arreglo[2][1]) = %p %p", &arreglo[2][1], *(arreglo + 2) + 1);
    printf("\ndir(arreglo[2][2]) = %p %p", &arreglo[2][2], *(arreglo + 2) + 2);
    printf("\ndir(arreglo[2][3]) = %p %p", &arreglo[2][3], *(arreglo + 2) + 3);

    printf("\n\n-Accediendo a los valores del arreglo 1D del arreglo 2D: \n");
    printf("\nvalor(arreglo[0][0]) = %d %d", arreglo[0][0], *(*(arreglo + 0) + 0));
    printf("\nvalor(arreglo[0][1]) = %d %d", arreglo[0][1], *(*(arreglo + 0) + 1));
    printf("\nvalor(arreglo[0][2]) = %d %d", arreglo[0][2], *(*(arreglo + 0) + 2));
    printf("\nvalor(arreglo[0][0]) = %d %d", arreglo[0][3], *(*(arreglo + 0) + 3));
    printf("\nvalor(arreglo[1][0]) = %d %d", arreglo[1][0], *(*(arreglo + 1) + 0));
    printf("\nvalor(arreglo[1][1]) = %d %d", arreglo[1][1], *(*(arreglo + 1) + 1));
    printf("\nvalor(arreglo[1][2]) = %d %d", arreglo[1][2], *(*(arreglo + 1) + 2));
    printf("\nvalor(arreglo[1][3]) = %d %d", arreglo[1][3], *(*(arreglo + 1) + 3));
    printf("\nvalor(arreglo[2][0]) = %d %d", arreglo[2][0], *(*(arreglo + 2) + 0));
    printf("\nvalor(arreglo[2][1]) = %d %d", arreglo[2][1], *(*(arreglo + 2) + 1));
    printf("\nvalor(arreglo[2][2]) = %d %d", arreglo[2][2], *(*(arreglo + 2) + 2));
    printf("\nvalor(arreglo[2][3]) = %d %d", arreglo[2][3], *(*(arreglo + 2) + 3));

    printf("\n\n-Accediendo a los elementos de los arreglos 1D del arreglo 2D usando *arreglo: \n");
    printf("\ndir(arreglo[0][0]) = %p %p", &arreglo[0][0], *arreglo + 0);
    printf("\ndir(arreglo[0][1]) = %p %p", &arreglo[0][1], *arreglo + 1);
    printf("\ndir(arreglo[0][2]) = %p %p", &arreglo[0][2], *arreglo + 2);
    printf("\ndir(arreglo[0][3]) = %p %p", &arreglo[0][3], *arreglo + 3);
    printf("\ndir(arreglo[1][0]) = %p %p", &arreglo[1][0], *arreglo + 4);
    printf("\ndir(arreglo[1][1]) = %p %p", &arreglo[1][1], *arreglo + 5);
    printf("\ndir(arreglo[1][2]) = %p %p", &arreglo[1][2], *arreglo + 6);
    printf("\ndir(arreglo[1][3]) = %p %p", &arreglo[1][3], *arreglo + 7);
    printf("\ndir(arreglo[2][0]) = %p %p", &arreglo[2][0], *arreglo + 8);
    printf("\ndir(arreglo[2][1]) = %p %p", &arreglo[2][1], *arreglo + 9);
    printf("\ndir(arreglo[2][2]) = %p %p", &arreglo[2][2], *arreglo + 10);
    printf("\ndir(arreglo[2][3]) = %p %p", &arreglo[2][3], *arreglo + 11);

    printf("\n\n-Accediendo al primer valor del arreglo 2D usando **arreglo: \n");
    printf("\nvalor(arreglo[0][0]) = %d %d\n\n", arreglo[0][0], **arreglo);

    return 0;
}