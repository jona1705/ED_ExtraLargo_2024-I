#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo * siguiente;
    struct nodo * anterior;
};

struct nodo * crearNodo(int x){
    struct nodo * nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    if(nuevo == NULL) exit(0);
    nuevo->dato = x;
    nuevo->siguiente = NULL;
    nuevo->anterior = NULL;
    
    return nuevo;
}

void desplegarAdelante(struct nodo * cabecera){
    struct nodo * temp = cabecera;
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

void desplegarAtras(struct nodo * cabecera){
    struct nodo * temp = cabecera;
    while(temp->siguiente != NULL){
    	// Recorremos la lista hasta el ultimo nodo
    	temp = temp->siguiente;
	}
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->anterior;
    }
    printf("NULL\n");
}

struct nodo * insertar_inicio(struct nodo * cabecera, int x){
    struct nodo * nuevo = crearNodo(x);
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        cabecera = nuevo;
    } else{
        // Hay mas nodos en la lista
        nuevo->siguiente = cabecera;
        cabecera->anterior = nuevo;
        cabecera = nuevo;
    }
    return cabecera;
}

struct nodo * insertar_final(struct nodo * cabecera, int x){
    struct nodo * nuevo = crearNodo(x);
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        cabecera = nuevo;
    } else{
        // Hay mas nodos en la lista
        struct nodo * temp = cabecera;
        while(temp->siguiente != NULL){
            // Nos movemos hasta el ultimo nodo
            temp = temp->siguiente;
        }
        // El ultimo nodo apunta al nuevo
        temp->siguiente = nuevo;
        // La parte anterior de nuevo apunta al ultimo
        nuevo->anterior = temp;
    }
    return cabecera;
}

struct nodo * borrar_inicio(struct nodo * cabecera){
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return NULL;
    } else{
        // Hay mas nodos en la lista
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
        struct nodo * temp = cabecera;
        if(temp->siguiente == NULL){
            // Solo queda un nodo en la lista
            cabecera = NULL;
        } 
        // 2) ¿Que sucede cuando hay mas nodos en la lista?
        else{
            cabecera = cabecera->siguiente;
            cabecera->anterior = NULL;
        }
        free(temp);
    }
    return cabecera;
}

struct nodo * borrar_final(struct nodo * cabecera){
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return NULL;
    } else{
        // Hay mas nodos en la lista
        struct nodo * temp = cabecera;
    	struct nodo * prev = NULL;
        while(temp->siguiente != NULL){
            // Nos movemos hasta el previo y ultimo nodo
            prev = temp;
            temp = temp->siguiente;
        }
        // 1) �Que sucede cuando solo queda un nodo en la lista?
        if(temp == cabecera){
            // Solo queda un nodo en la lista
            cabecera = NULL; 
        } else{  
            // El ultimo nodo apunta al nuevo
            prev->siguiente = NULL;
        }
        free(temp);    
    }
    return cabecera;
}

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

int main(){
    // Declaramos los nodos
    struct nodo * cabecera = NULL;
    printf("Operaciones de Insercion: \n");
    // Probar la funcion insertar_inicio
    cabecera = insertar_inicio(cabecera, 67);
    cabecera = insertar_inicio(cabecera, 13);
    cabecera = insertar_inicio(cabecera, 45);
    desplegarAdelante(cabecera);
    desplegarAtras(cabecera);
    // Probar la funcion insertar_final
    cabecera = insertar_final(cabecera, 12);
    cabecera = insertar_final(cabecera, 14);
    cabecera = insertar_final(cabecera, 25);
    desplegarAdelante(cabecera);
    desplegarAtras(cabecera);
    
    printf("Operaciones de Borrado: \n");
    // Probar la funcion borrar_inicio
    cabecera = borrar_inicio(cabecera);
    cabecera = borrar_inicio(cabecera);
    desplegarAdelante(cabecera);
    desplegarAtras(cabecera);
    
    // Probar la funcion borrar_final
    cabecera = borrar_final(cabecera);
    cabecera = borrar_final(cabecera);
    desplegarAdelante(cabecera);
    desplegarAtras(cabecera);
    
    return 0;
}


