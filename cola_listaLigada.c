#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int dato;
    struct nodo * siguiente;
};

struct cola{
	struct nodo * frente; // Equivale al apuntador cabecera
	struct nodo * final;  // Equivale al apuntador final
};

struct nodo * crearNodo(int x){
    struct nodo * nuevo = (struct nodo *) malloc(sizeof(struct nodo));
    if(nuevo == NULL) exit(0);
    nuevo->dato = x;
    nuevo->siguiente = NULL;
    
    return nuevo;
}

struct cola * crearCola(){
	struct cola * nuevaCola = (struct cola *) malloc(sizeof(struct cola));
    if(nuevaCola == NULL) exit(0);
    nuevaCola->frente = NULL;
    nuevaCola->final = NULL;
    return nuevaCola;
}

void desplegar(struct cola * cola){
    struct nodo * temp = cola->frente;
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
}

void encolar(struct cola * cola, int x){
    struct nodo * nuevo = crearNodo(x);
    if(cola->frente == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        cola->frente = nuevo;
        cola->final = nuevo;
    } else{
        // Hay mas nodos en la lista
        nuevo->siguiente = cola->frente;
        cola->frente = nuevo;
    }
}

void desencolar(struct cola * cola){
    if(cola->frente == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return;
    } else{
        // Hay mas nodos en la lista
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
        struct nodo * temp = cola->frente;
        if(temp->siguiente == NULL){
            // Solo queda un nodo en la lista
            cola->frente = cola->final = NULL;
        } 
        // 2) ¿Que sucede cuando hay mas nodos en la lista?
        else{
            cola->frente = cola->frente->siguiente;
        }
        free(temp);
    }
}

int frente(struct cola * cola){
	return cola->frente->dato;
}

int final_(struct cola * cola){
	return cola->final->dato;
}

int main(){
    // Declaramos los apuntadores
    struct cola * c = crearCola();
    printf("Operaciones de Insercion: \n");
    // Probar la funcion insertar_inicio
    encolar(c, 67);
    encolar(c, 13);
    encolar(c, 45);
    desplegar(c);
    printf("Nodo al frente de la cola: %d", frente(c));
    printf("\nNodo al final de la cola: %d\n", final_(c));
    
    printf("\nOperaciones de Borrado: \n");
    // Probar la funcion borrar_inicio
    desencolar(c);
    desencolar(c);
    desplegar(c);
    printf("Nodo al frente de la cola: %d", frente(c));
    printf("\nNodo al final de la cola: %d\n", final_(c));
    
    return 0;
}


