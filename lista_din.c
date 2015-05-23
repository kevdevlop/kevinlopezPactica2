#include <stdio.h>
#include <stdlib.h>

#define true 1;
#define false 0;

typedef struct  {
	int info;
	Nodo* sig;
}Nodo;
typedef struct {
	Nodo* raiz;
	int tamaño;
}Lista;

Nodo* obtenNodo(int x);
void creaLista(Lista* l);
void tamanioLista(Lista* l);
bool esVacia(Lista l);
void insertaInicio(Lista* l, int x);
void eliminaInicio(Lista* l);
void inserta(Lista* l, int x, int p);
void imprimeLista(Lista* l);
int recupera(Lista* l,int p);
int buscar(Lista* l, int x);
void eliminar(Lista* l, int p);
void anula(Lista* l);

void creaLista(Lista* l){
	l->tamaño = 0;
	l->raiz = NULL;
}
int tamanioLista(Lista* l){
	Nodo* actual = l->raiz;
	int tam = 0;
	if(esVacia(l) == true){
		return 0;
	}else 
		while(actual != NULL){
			actual = actual->sig;
			tam++;
		}
		return tam;	
}

int esVacia(Lista l){
	if(l.tamaño == 0)
		return true;
	return false;
}

void insertaInicio(Lista* l, int x){
	//Crear el nodo con x 	
	Nodo* nuevo = obtenNodo(x);
	nodo->sig = nuevo->raiz;
	l->raiz = nuevo;
	l->tamaño++;
	
}
void anula(Lista* l){

}
void eliminaInicio(Lista* l){
	Nodo* primerNodo = l->raiz;
	if (esVacia(l) == true){
			printf("La Lista está vacia, no se puede elminar.\n");
	}else
		primerNodo = primerNodo->sig;

}
Nodo* obtenNodo(int x){
	Nodo* apNodo = (Nodo*) malloc(sizeof(Nodo));
	apNodo->info = x;
	return apNodo;
//para regresar la memoria del nodo
//free(apNodo); apuntador al nodo que queremos eliminar
}
void imprimeLista(Lista* l){
	Nodo* actual = l->raiz;
	while( actual != NULL ){
		printf("%d", actual->info);
		actual = actual->sig;
	}	
}
void inserta(Lista* l, int x, int p){
	Nodo* nuevo = obtenNodo(x);
	Nodo* anterior = l->raiz;
	if(p == 0){
		insertarInicio(l,x);	
	}else
		for (int i=0;i<tamanioLista(l);i++)
			anterior = anterior->sig;
		nuevo->sig = anterior->sig;
		anterior->sig = nuevo;
		l-> tamaño++;
	}
}
int recupera(Lista* l,int p){
	Nodo* actual = l->raiz;
	for (int i = 0; i < p; ++i)
	{
		actual = actual->sig;
	}
	return actual->info;
}
int buscar(Lista* l, int x){
	Nodo* actual = l->raiz;
	int pos = 0;
	while(actual->info != x && actual != NULL){
		actual = actual -> sig;
		pos++;
	}
	return pos;

	
}
void eliminar(Lista* l, int p){
	Nodo* anterior = l->raiz;
	Nodo* sigPos;
	if (p != 0)
	{
		for (int i = 0; i < tamanioLista(l)-1; ++i)
			anterior = anterior->sig;
		sigPos = anterior -> sig -> sig;
		free(anterior->sig);
		anterior->sig = sigPos;
	}
}
