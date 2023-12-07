#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo * siguiente;
};

struct pila{
	struct nodo * tope; // Equivale a la cabecera en una LLS
};

struct nodo * crearNodo(int x){
    struct nodo * nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    if(nuevo == NULL) exit(0);
    nuevo->dato = x;
    nuevo->siguiente = NULL;
    
    return nuevo;
}

struct pila * crearPila(){
	struct pila * nuevaPila = (struct pila *) malloc(sizeof(struct pila));
    if(nuevaPila == NULL) exit(0);
    nuevaPila->tope = NULL;
    return nuevaPila;
}

void desplegar(struct pila * pila){
    struct nodo * temp = pila->tope;
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

void push(struct pila * pila, int x){
    struct nodo * nuevo = crearNodo(x);
    if(pila->tope == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        pila->tope = nuevo;
    } else{
        // Hay mas nodos en la lista
        nuevo->siguiente = pila->tope;
        pila->tope = nuevo;
    }
}


void pop(struct pila * pila){
    if(pila->tope == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return;
    } else{
        // Hay mas nodos en la lista
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
        struct nodo * temp = pila->tope;
        if(temp->siguiente == NULL){
            // Solo queda un nodo en la lista
            pila->tope = NULL;
        } 
        // 2) ¿Que sucede cuando hay mas nodos en la lista?
        else{
            pila->tope = pila->tope->siguiente;
        }
        free(temp);
    }
}

int peek(struct pila * pila){
	return pila->tope->dato;
}

int main(){
    // Declaramos los nodos
	struct pila * p = crearPila();
    printf("Operaciones de Insercion: \n");
    // Probar la funcion insertar_inicio
    push(p, 67);
    push(p, 13);
    push(p, 45);
    push(p, 23);
    push(p, 76);
    push(p, 98);
    push(p, 103);
    desplegar(p);
    printf("Nodo en el tope de la pila: %d", peek(p));
    
    printf("\nOperaciones de Borrado: \n");
    // Probar la funcion borrar_inicio
    pop(p);
    pop(p);
    desplegar(p);
    printf("Nodo en el tope de la pila: %d", peek(p));
    
    return 0;
}


