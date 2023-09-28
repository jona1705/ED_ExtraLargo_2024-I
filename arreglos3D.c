#include <stdio.h>

int main(){
    int arreglo[2][3][4] = {
        {
            // Pagina 1
            {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
        },
        {
            // Pagina 2
            {13, 14, 15, 16}, {17, 18, 19, 20}, {21, 22, 23, 24}
        }
    };

    // Imprimiendo todas las direcciones
    int i, j, k;
    printf("\n- Direcciones de memoria del arreglo 3D: \n");
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++){
                printf("\ndir(arreglo[%d][%d][%d]) = %p", i, j, k, &arreglo[i][j][k]);
            }
        }
    }

    printf("\n\n-Accediendo a las paginas del arreglo 3D: \n");
    printf("\ndir_base(arreglo) = %p %p", arreglo, arreglo[0]);
    printf("\ndir(arreglo[0]) = %p %p", arreglo + 0, arreglo[0]);
    printf("\ndir(arreglo[1]) = %p %p", arreglo + 1, arreglo[1]);

    printf("\n\n-Accediendo a los arreglos 2D del arreglo 3D: \n");
    printf("\ndir(arreglo[0][0]) = %p %p %p %p", *(arreglo + 0) + 0, *(arreglo[0] + 0), arreglo[0] + 0, arreglo[0][0]);
    printf("\ndir(arreglo[0][1]) = %p %p %p %p", *(arreglo + 0) + 1, *(arreglo[0] + 1), arreglo[0] + 1, arreglo[0][1]);
    printf("\ndir(arreglo[0][2]) = %p %p %p %p", *(arreglo + 0) + 2,  *(arreglo[0] + 2), arreglo[0] + 2, arreglo[0][2]);

    printf("\n\n-Accediendo a los valores del arreglo 3D: \n");
    printf("\nval(arreglo[0][0][0]) = %d %d", arreglo[0][0][0], *(*(*(arreglo + 0) + 0) + 0));
    printf("\nval(arreglo[0][0][1]) = %d %d", arreglo[0][0][1], *(*(*(arreglo + 0) + 0) + 1));
    printf("\nval(arreglo[0][0][2]) = %d %d", arreglo[0][0][2], *(*(*(arreglo + 0) + 0) + 2));

    printf("\n\n-Accediendo a los arreglos 2D del arreglo 3D usando *p: \n");
    printf("\ndir(arreglo[0][0]) = %p %p", arreglo[0][0], *arreglo + 0);
    printf("\ndir(arreglo[0][1]) = %p %p", arreglo[0][1], *arreglo + 1);
    printf("\ndir(arreglo[0][2]) = %p %p", arreglo[0][2], *arreglo + 2);
    printf("\ndir(arreglo[1][0]) = %p %p", arreglo[1][0], *arreglo + 3);
    printf("\ndir(arreglo[1][1]) = %p %p", arreglo[1][1], *arreglo + 4);
    printf("\ndir(arreglo[1][2]) = %p %p", arreglo[1][2], *arreglo + 5);

    printf("\n\n-Accediendo a elementos del arreglo 3D usando **p: \n");
    printf("\ndir(arreglo[0][0][0]) = %p %p", &arreglo[0][0][0], **arreglo + 0);
    printf("\ndir(arreglo[0][0][1]) = %p %p", &arreglo[0][0][1], **arreglo + 1);
    printf("\ndir(arreglo[0][0][2]) = %p %p", &arreglo[0][0][2], **arreglo + 2);
    printf("\ndir(arreglo[0][0][3]) = %p %p", &arreglo[0][0][3], **arreglo + 3);

    printf("\n\n-Accediendo a los valores del arreglo 3D usando **p: \n");
    printf("\nvalor(arreglo[0][0][0]) = %d %d", arreglo[0][0][0], *(**arreglo + 0));
    printf("\nvalor(arreglo[0][0][1]) = %d %d", arreglo[0][0][1], *(**arreglo + 1));
    printf("\nvalor(arreglo[0][0][2]) = %d %d", arreglo[0][0][2], *(**arreglo + 2));
    printf("\nvalor(arreglo[0][0][3]) = %d %d", arreglo[0][0][3], *(**arreglo + 3));

    printf("\n\n-Accediendo al primer valor del arreglo 3D usando ***p: \n");
    printf("\nvalor(arreglo[0][0][0]) = %d %d", arreglo[0][0][0], ***arreglo);

    return 0;
}