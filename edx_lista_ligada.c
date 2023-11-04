#include <stdio.h>
#include <stdlib.h>

struct punto{
    int x;
    int y;
};

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

struct nodo * insertar_inicio(struct nodo * cabecera, int x){
    struct nodo * nuevo = crearNodo(x);
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Vamos a insertar el primer nodo
        cabecera = nuevo;
    } else{
        // Hay mas nodos en la lista
        nuevo->siguiente = cabecera;
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
        }
        free(temp);
    }
    return cabecera;
}

int contar_nodos(struct nodo * cabecera){
    if(cabecera == NULL){
        // Si la lista vacia
        return 0;
    } else{
        struct nodo * temp = cabecera;
        int cont = 0;
        while(temp != NULL){
            temp = temp->siguiente;
            cont++;
        }
        return cont;
    }
}

struct nodo * insertar_intermedio(struct nodo * cabecera, int pos, int x){
    struct nodo * nuevo = crearNodo(x);
    // Se toma el 0 como posicion valida
    int noNodos = contar_nodos(cabecera);
    if(pos<0 || pos>noNodos+1){
    	// Rango: [0, pos]
        printf("Posicion invalida\n");
        return NULL;
    } else if(pos == 0){
    	// Insertamos un nodo en la primer posicion
    	if(cabecera == NULL) {
    		// Si la lista esta vacia
    		// es primer nodo en la lista
        	cabecera = nuevo;
    	} else{
    		// Si hay mas nodos el nuevo nodo pasa
    		// a ser el primero
    		nuevo->siguiente = cabecera;
        	cabecera = nuevo;
		}    
    } else{
        struct nodo * temp = cabecera;
        int i=0;
        while(i<pos-1){ // <-- Linea corregida
        	// Recorremos la lista hasta el (pos-1)-th nodo
            temp = temp->siguiente; // (pos-1)-th nodo
            i++;
        }
        if(temp->siguiente == NULL){
        	// Si el (pos-1)-th nodo es el ultimo
        	// El nuevo nodo sera el ultimo
        	temp->siguiente = nuevo;
		} else{
			// El nodo se inserta en una posici�n intermedia
			nuevo->siguiente = temp->siguiente;
        	temp->siguiente = nuevo;
		}    
    }
    
    return cabecera;
}

struct nodo * borrar_final(struct nodo * cabecera){
    struct nodo * temp = cabecera;
    struct nodo * prev = NULL;
    if(cabecera == NULL){
        // La lista ligada estas vacia
        // Nada que hacer
        // Underflow (Subdesbordamiento) vs Overflow (Desbordamiento)
        return cabecera;
    } else{
        // Hay mas nodos en la lista
        while(temp->siguiente != NULL){
            // Nos movemos hasta el previo y ultimo nodo
            prev = temp;
            temp = temp->siguiente;
        }
        // 1) ¿Que sucede cuando solo queda un nodo en la lista?
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

struct nodo * borrar_intermedio(struct nodo * cabecera, int pos){
    if(cabecera == NULL) {
        printf("Lista Vacia!!\n");
        return NULL;
    } else {
        // Se toma el 0 como posicion valida
        int noNodos = contar_nodos(cabecera);
        if(pos<0 || pos>noNodos){
        	// Rango: [0, pos-1]
            printf("Posicion invalida\n");
            return NULL;
        } else {
            struct nodo * temp = NULL;
            if(pos == 0){
            	// Borramos el primer nodo en la lista
                temp = cabecera;
                if(temp->siguiente == NULL){
                	// Si solo queda un nodo en la lista
                	cabecera = NULL;
				} else{
					// Si hay mas nodos el nodo cabecera
					// ser� el segundo
					cabecera = cabecera->siguiente;
				}
                free(temp);
            } else{
                int i=0;
                temp = cabecera;
                while(i<pos-1){ // <-- Linea corregida
                	// Recorremos la lista hasta el (pos-1)-th nodo
                    temp = temp->siguiente; // (pos-1)-th nodo
                    i++;
                }
                struct nodo * borrado = temp->siguiente; // (pos)-th nodo
                if(borrado->siguiente == NULL){
                	// Si borramos el ultimo nodo
                	// el nodo previo ser� el �ltimo
                	temp->siguiente = NULL; // El nodo (pos-1)-th en su parte sig apunta a NULL 
				} else{
					// El nodo previo pasa a apuntar al nodo
					// que sigue al nodo a ser borrado
					temp->siguiente = borrado->siguiente; // (pos+1)-th nodo
				}
                free(borrado);
            }
        }
    }
    
    return cabecera;
}

int main(){
    // Declaramos los nodos
    struct nodo * n1 = NULL;
    struct nodo * n2 = NULL;
    struct nodo * n3 = NULL;
    struct nodo * n4 = NULL;
    // Tomar memoria
    n1 = (struct nodo *) malloc(sizeof(struct nodo));
    if(n1 == NULL) exit(0);
    n2 = (struct nodo *) malloc(sizeof(struct nodo));
    if(n2 == NULL) exit(0);
    n3 = (struct nodo *) malloc(sizeof(struct nodo));
    if(n3 == NULL) exit(0);
    n4 = (struct nodo *) malloc(sizeof(struct nodo));
    if(n4 == NULL) exit(0);
    // Asignamos datos
    n1->dato = 9;
    n2->dato = 7;
    n3->dato = 4;
    n4->dato = 6;
    // Empezamos a enlazar
    n1->siguiente = n2;
    n2->siguiente = n3;
    n3->siguiente = n4;
    n4->siguiente = NULL;
    // Imprimir los datos en la lista ligada
    struct nodo * cabecera = n1;
    // Recorremos la lista          
    struct nodo * temp = cabecera;
    while(temp != NULL){
        printf("%d->", temp->dato);
        temp = temp->siguiente;
    }
    printf("NULL\n");
    // Crear un nuevo nodo
    struct nodo * n5 = crearNodo(10);
    n4->siguiente = n5;
    desplegar(cabecera);
    printf("Operaciones de Insercion: \n");
    // Probar la funcion insertar_inicio
    cabecera = insertar_inicio(cabecera, 67);
    cabecera = insertar_inicio(cabecera, 13);
    cabecera = insertar_inicio(cabecera, 45);
    desplegar(cabecera);
    // Probar la funcion insertar_final
    cabecera = insertar_final(cabecera, 12);
    cabecera = insertar_final(cabecera, 14);
    cabecera = insertar_final(cabecera, 25);
    desplegar(cabecera);
    // Probar la funcion insertar_intermedio
    cabecera = insertar_intermedio(cabecera, 1, 23);
    cabecera = insertar_intermedio(cabecera, 4, 17);
    desplegar(cabecera);
    
    printf("Operaciones de Borrado: \n");
    // Probar la funcion borrar_inicio
    cabecera = borrar_inicio(cabecera);
    cabecera = borrar_inicio(cabecera);
    desplegar(cabecera);
    // Probar la funcion borrar_final
    cabecera = borrar_final(cabecera);
    cabecera = borrar_final(cabecera);
    desplegar(cabecera);
    // Probar la funcion borrar_intermedio
    cabecera = borrar_intermedio(cabecera, 0);
    cabecera = borrar_intermedio(cabecera, 4);
    cabecera = borrar_intermedio(cabecera, 6);
    cabecera = borrar_intermedio(cabecera, 1);
    //cabecera = borrar_intermedio(cabecera, 10);
    desplegar(cabecera);


    return 0;
}
























































































































































































