#include <stdio.h>

int main(){
    int arreglo[3][4] = {
        {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}
    };

    int (*p)[4] = arreglo;

    /* 
        p:
        - p representa un apuntador a un arreglo 1D de enteros
        - p permite que nos desplacemos por los elementos del arreglo 2D, 
          es decir, los arreglos 1D del arreglo 2D    
    */

    printf("\n\ndir_base(arreglo) = %p %p", arreglo, p);

    printf("\n\ndir(arreglo[0][0]) = %p %p\n", &arreglo[0][0], *(p + 0) + 0);
    printf("dir(arreglo[0][1]) = %p %p\n", &arreglo[0][1], *(p + 0) + 1);
    printf("dir(arreglo[0][2]) = %p %p\n", &arreglo[0][2], *(p + 0) + 2);
    printf("dir(arreglo[0][3]) = %p %p\n", &arreglo[0][3], *(p + 0) + 3);
    printf("dir(arreglo[1][0]) = %p %p\n", &arreglo[1][0], *(p + 1) + 0);
    printf("dir(arreglo[1][1]) = %p %p\n", &arreglo[1][1], *(p + 1) + 1);
    printf("dir(arreglo[1][2]) = %p %p\n", &arreglo[1][2], *(p + 1) + 2);
    printf("dir(arreglo[1][3]) = %p %p\n", &arreglo[1][3], *(p + 1) + 3);
    printf("dir(arreglo[2][0]) = %p %p\n", &arreglo[2][0], *(p + 2) + 0);
    printf("dir(arreglo[2][1]) = %p %p\n", &arreglo[2][1], *(p + 2) + 1);
    printf("dir(arreglo[2][2]) = %p %p\n", &arreglo[2][2], *(p + 2) + 2);
    printf("dir(arreglo[2][3]) = %p %p\n", &arreglo[2][3], *(p + 2) + 3);

    printf("\n\nvalor(arreglo[0][0]) = %d %d\n", arreglo[0][0], *(*(p + 0) + 0));
    printf("valor(arreglo[0][1]) = %d %d\n", arreglo[0][1], *(*(p + 0) + 1));
    printf("valor(arreglo[0][2]) = %d %d\n", arreglo[0][2], *(*(p + 0) + 2));
    printf("valor(arreglo[0][3]) = %d %d\n", arreglo[0][3], *(*(p + 0) + 3));
    printf("valor(arreglo[1][0]) = %d %d\n", arreglo[1][0], *(*(p + 1) + 0));
    printf("valor(arreglo[1][1]) = %d %d\n", arreglo[1][1], *(*(p + 1) + 1));
    printf("valor(arreglo[1][2]) = %d %d\n", arreglo[1][2], *(*(p + 1) + 2));
    printf("valor(arreglo[1][3]) = %d %d\n", arreglo[1][3], *(*(p + 1) + 3));
    printf("valor(arreglo[2][0]) = %d %d\n", arreglo[2][0], *(*(p + 2) + 0));
    printf("valor(arreglo[2][1]) = %d %d\n", arreglo[2][1], *(*(p + 2) + 1));
    printf("valor(arreglo[2][2]) = %d %d\n", arreglo[2][2], *(*(p + 2) + 2));
    printf("valor(arreglo[2][3]) = %d %d\n", arreglo[2][3], *(*(p + 2) + 3));

    /* 
        *p:
        - p representa la desreferencia del apuntador p.
        - p accede al primer valor del arreglo 2D y apartir de ahí
          permite que nos desplacemos por cada valor del arreglo 2D   
    */

    printf("\n\ndir(arreglo[0][0]) = %p %p\n", &arreglo[0][0], *p + 0);
    printf("dir(arreglo[0][1]) = %p %p\n", &arreglo[0][1], *p + 1);
    printf("dir(arreglo[0][2]) = %p %p\n", &arreglo[0][2], *p + 2);
    printf("dir(arreglo[0][3]) = %p %p\n", &arreglo[0][3], *p + 3);
    printf("dir(arreglo[1][0]) = %p %p\n", &arreglo[1][0], *p + 4);
    printf("dir(arreglo[1][1]) = %p %p\n", &arreglo[1][1], *p + 5);
    printf("dir(arreglo[1][2]) = %p %p\n", &arreglo[1][2], *p + 6);
    printf("dir(arreglo[1][3]) = %p %p\n", &arreglo[1][3], *p + 7);
    printf("dir(arreglo[2][0]) = %p %p\n", &arreglo[2][0], *p + 8);
    printf("dir(arreglo[2][1]) = %p %p\n", &arreglo[2][1], *p + 9);
    printf("dir(arreglo[2][2]) = %p %p\n", &arreglo[2][2], *p + 10);
    printf("dir(arreglo[2][3]) = %p %p\n", &arreglo[2][3], *p + 11);

    printf("\n\nvalor(arreglo[0][0]) = %d %d\n", arreglo[0][0], *(*p + 0));
    printf("valor(arreglo[0][1]) = %d %d\n", arreglo[0][1], *(*p + 1));
    printf("valor(arreglo[0][2]) = %d %d\n", arreglo[0][2], *(*p + 2));
    printf("valor(arreglo[0][3]) = %d %d\n", arreglo[0][3], *(*p + 3));
    printf("valor(arreglo[1][0]) = %d %d\n", arreglo[1][0], *(*p + 4));
    printf("valor(arreglo[1][1]) = %d %d\n", arreglo[1][1], *(*p + 5));
    printf("valor(arreglo[1][2]) = %d %d\n", arreglo[1][2], *(*p + 6));
    printf("valor(arreglo[1][3]) = %d %d\n", arreglo[1][3], *(*p + 7));
    printf("valor(arreglo[2][0]) = %d %d\n", arreglo[2][0], *(*p + 8));
    printf("valor(arreglo[2][1]) = %d %d\n", arreglo[2][1], *(*p + 9));
    printf("valor(arreglo[2][2]) = %d %d\n", arreglo[2][2], *(*p + 10));
    printf("valor(arreglo[2][3]) = %d %d\n", arreglo[2][3], *(*p + 11));

    printf("\n\nvalor(arreglo[0][0]) = %d %d\n", arreglo[0][0], **p);
}