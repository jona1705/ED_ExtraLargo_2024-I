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

    int (*p)[3][4] = arreglo;

    /* 
        p:
        - p es un apuntador al primer elemento de un arreglo 3D
          o arreglo de arreglos
        - Cuando accedemos a p obtenemos la dirección del primer
          elementos en memoria, el cual apunta a un arreglo 2D o
          arreglo de arreglos (dependiendo de como lo hemos declarado).
        - Podemos usar p para desplazarnos a traves del arreglo 3D
          incrementando o decrementadno el apuntador para movernos
          a diferentes elementos dentro del arreglo.    
    */

    printf("dir_base(arreglo) = %p %p\n\n", arreglo, p);

    printf("dir(arreglo[0]) = %p %p\n", arreglo[0], p + 0);
    printf("dir(arreglo[1]) = %p %p\n\n", arreglo[1], p + 1);

    printf("dir(arreglo[0][0]) = %p %p\n", arreglo[0][0], *(p + 0) + 0);
    printf("dir(arreglo[0][1]) = %p %p\n", arreglo[0][1], *(p + 0) + 1);
    printf("dir(arreglo[0][2]) = %p %p\n", arreglo[0][2], *(p + 0) + 2);
    printf("dir(arreglo[1][0]) = %p %p\n", arreglo[1][0], *(p + 1) + 0);
    printf("dir(arreglo[1][1]) = %p %p\n", arreglo[1][1], *(p + 1) + 1);
    printf("dir(arreglo[1][2]) = %p %p\n\n", arreglo[1][2], *(p + 1) + 2);
    printf("dir(arreglo[0][0][0]) = %p %p\n", &arreglo[0][0][0], *(*(p + 0) + 0) + 0);
    printf("dir(arreglo[0][0][1]) = %p %p\n", &arreglo[0][0][1], *(*(p + 0) + 0) + 1);
    printf("dir(arreglo[0][0][2]) = %p %p\n", &arreglo[0][0][2], *(*(p + 0) + 0) + 2);
    printf("dir(arreglo[0][0][3]) = %p %p\n", &arreglo[0][0][3], *(*(p + 0) + 0) + 3);

    /* 
        *p:
        - *p es el valor desreferenciado del apuntador p
        - En el contexto de un arreglo 3D, *p nos da una referencia
          al primer arreglo 2D o primer arreglo de nuestro 
          arreglo de arreglos
        - Es equivalente a arreglo[0]  
    */

    printf("dir(arreglo[0][0]) = %p %p\n", arreglo[0] + 0, *p + 0);
    printf("dir(arreglo[0][1]) = %p %p\n", arreglo[0] + 1, *p + 1);
    printf("dir(arreglo[0][2]) = %p %p\n", arreglo[0] + 2, *p + 2);
    printf("dir(arreglo[1][0]) = %p %p\n", arreglo[0] + 3, *p + 3);
    printf("dir(arreglo[1][1]) = %p %p\n", arreglo[0] + 4, *p + 4);
    printf("dir(arreglo[1][2]) = %p %p\n\n", arreglo[0] + 5, *p + 5);

     /* 
        **p:
        - Intentamos accesar a un elemento dentro del arreglo 3D como
          si fuera un arreglo 2D 
    */

    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][0][0], **p + 0);  
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][0][1], **p + 1);  
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][0][2], **p + 2); 
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][0][3], **p + 3); 
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][1][0], **p + 4);
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][1][1], **p + 5);
    printf("dir(arreglo[0][0]) = %p %p\n", &arreglo[0][1][2], **p + 6);
    printf("dir(arreglo[0][0]) = %p %p\n\n", &arreglo[0][1][3], **p + 7);

    // Accediendo a los valores
    printf("valor(arreglo[0][0][0]) = %d %d %d\n", arreglo[0][0][0], *(*(*(p + 0) + 0) + 0), ***p + 0);
    printf("valor(arreglo[0][0][1]) = %d %d %d\n", arreglo[0][0][1], *(*(*(p + 0) + 0) + 1), ***p + 1);
    printf("valor(arreglo[0][0][2]) = %d %d %d\n", arreglo[0][0][2], *(*(*(p + 0) + 0) + 2), ***p + 2);
    printf("valor(arreglo[0][0][3]) = %d %d %d\n", arreglo[0][0][3], *(*(*(p + 0) + 0) + 3), ***p + 3);


    return 0;
}