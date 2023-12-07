#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo * siguiente;
};

struct nodo * crearNodo(int x){
    struct nodo * nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    if(nuevo == NULL) exit(0);
    nuevo->dato = x;
    nuevo->siguiente = NULL;
    
    return nuevo;
}

void desplegar(struct nodo * cabecera){
    struct nodo * temp = cabecera;
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

void insertar_inicio(struct nodo ** cabecera, struct nodo ** final, int x){
    struct nodo * nuevo = crearNodo(x);
    if(*cabecera == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        *cabecera = nuevo;
        *final = nuevo;
    } else{
        // Hay mas nodos en la lista
        nuevo->siguiente = *cabecera;
        *cabecera = nuevo;
    }
}

void insertar_final(struct nodo ** cabecera, struct nodo ** final, int x){
    struct nodo * nuevo = crearNodo(x);
    if(*cabecera == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        *cabecera = nuevo;
        *final = nuevo;
    } else{
        // Hay mas nodos en la lista
        // El ultimo nodo apunta al nuevo
        (*final)->siguiente = nuevo;
        *final = nuevo;
    }
}

void borrar_inicio(struct nodo ** cabecera, struct nodo ** final){
    if(*cabecera == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return;
    } else{
        // Hay mas nodos en la lista
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
        struct nodo * temp = *cabecera;
        if(temp->siguiente == NULL){
            // Solo queda un nodo en la lista
            *cabecera = *final = NULL;
        } 
        // 2) ¿Que sucede cuando hay mas nodos en la lista?
        else{
            *cabecera = (*cabecera)->siguiente;
        }
        free(temp);
    }
}

void borrar_final(struct nodo ** cabecera, struct nodo ** final){
    struct nodo * prev = NULL;
    if(*cabecera == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return;
    } else{
        // Hay mas nodos en la lista
        struct nodo * temp = *cabecera;
        while(temp->siguiente != NULL){
            // Nos movemos hasta el previo y ultimo nodo
            prev = temp;
            temp = temp->siguiente;
        }
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
        if(temp->siguiente == *cabecera){
            // Solo queda un nodo en la lista
            *cabecera = *final = NULL; 
        } else{  
            // El ultimo nodo apunta al nuevo
            prev->siguiente = NULL;
            *final = prev;
            
        }
        free(temp);    
    }
}

int frente(struct nodo * cabecera){
	return cabecera->dato;
}

int final_(struct nodo * final){
	return final->dato;
}

void intercambiar(struct nodo * a, struct nodo * b){
    int temp = a->dato;
    a->dato = b->dato;
    b->dato = temp;
}

// Funcion basada en el algoritmo de la burbuja (mejorada)
void ordenar(struct nodo * cabecera){
	if(cabecera == NULL || cabecera->siguiente == NULL){
		// Si la lista esta vacia o tiene un elemento se considera ordenada
		return;
	}
	int swapped; // Bandera para verificar los intercambios
	// Empezamos a iterar
	do{
		swapped = 0;
		struct nodo * temp = cabecera;
		while(temp->siguiente != NULL){
			if(temp->dato > temp->siguiente->dato){
				intercambiar(temp, temp->siguiente);
				swapped = 1;
			}
			temp = temp->siguiente;
		}
	} while(swapped);
}

// Clave = Valor buscado
// Esta funcion implementa busqueda lineal
/*struct nodo * buscar(struct nodo * cabecera, int clave){
	struct nodo * temp = cabecera;
	while(temp != NULL){
		if(temp->dato == clave) return temp;
		temp = temp->siguiente;
	}
	return NULL;
}*/

int contar_nodos(struct nodo * cabecera){
	if(cabecera == NULL) return 0;
	// Empazamos a contar los nodos
	struct nodo * temp = cabecera;
	int cont = 0;
	while(temp != NULL){
		cont++;
		temp = temp->siguiente;
	}
	return cont;
}

// Esta funcion implementa busqueda binaria
struct nodo * buscar(struct nodo * cabecera, int clave){
	struct nodo * inicial = cabecera;
	struct nodo * final = NULL;
	// Contar el numero de nodos
	int length = contar_nodos(cabecera);
	// Ejecuta busqueda binaria
	while(inicial != final){
		int mitad = length/2;
		// Nos movemos hasta el nodo de enmedio
		struct nodo * temp = inicial;
		int i;
		for(i=0; i<mitad; i++){
			temp = temp->siguiente;
		}
		// Comparamos
		if(temp->dato == clave){
			return temp;
		} else if(temp->dato < clave){
			inicial = temp->siguiente;
		} else{
			final = temp;
		}
		length = length - mitad; // Acotamos el numero de nodos
	}
	return NULL;
}

int main(){
    // Declaramos los apuntadores
    struct nodo * cabecera = NULL, * final = NULL;
    printf("Operaciones de Insercion: \n");
    // Probar la funcion insertar_inicio
    insertar_inicio(&cabecera, &final, 67);
    insertar_inicio(&cabecera, &final, 13);
    insertar_inicio(&cabecera, &final, 45);
    desplegar(cabecera);
    printf("Nodo al frente: %d", frente(cabecera));
    printf("\nNodo al final: %d\n", final_(final));
    // Probar la funcion insertar_final
    insertar_final(&cabecera, &final, 12);
    insertar_final(&cabecera, &final, 14);
    insertar_final(&cabecera, &final, 25);
    desplegar(cabecera);
    printf("Nodo al frente: %d", frente(cabecera));
    printf("\nNodo al final: %d\n", final_(final));
    
    printf("\nOperaciones de Borrado: \n");
    // Probar la funcion borrar_inicio
    borrar_inicio(&cabecera, &final);
    borrar_inicio(&cabecera, &final);
    desplegar(cabecera);
    printf("Nodo al frente: %d", frente(cabecera));
    printf("\nNodo al final: %d\n", final_(final));
    // Probar la funcion borrar_final
    borrar_final(&cabecera, &final);
    borrar_final(&cabecera, &final);
    desplegar(cabecera);
    printf("Nodo al frente: %d", frente(cabecera));
    printf("\nNodo al final: %d\n", final_(final));
    
    printf("Lista Ordenada: \n");
    ordenar(cabecera);
    desplegar(cabecera);


    return 0;
}


