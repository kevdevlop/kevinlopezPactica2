#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef struct  {
	int info;
	struct Nodo* sig;
}*Nodo;
typedef struct {
	struct Nodo* raiz;
	int tam;
}*Lista;

struct Nodo* obtenNodo(int x);
void creaLista(Lista* l);
int tamanioLista(Lista* l);
int esVacia(Lista l);
void insertaInicio(Lista* l, int x);
void eliminaInicio(Lista* l);
void inserta(Lista* l, int x, int p);
void imprimeLista(Lista* l);
int recupera(Lista* l,int p);
int buscar(Lista* l, int x);
void eliminar(Lista* l, int p);
void anula(Lista* l);

void creaLista(Lista* l){
	l -> tam = 0;
	l -> raiz = NULL;
}
int tamanioLista(Lista* l){
	 return l->tam;
}

int esVacia(Lista l){
	if(l.tam == 0)
		return true;
	return false;
}

void insertaInicio(Lista* l, int x){
	//Crear el nodo con x 	
	struct Nodo* nuevo = obtenNodo(x);
	nuevo -> sig = nuevo -> raiz;
	l -> raiz = nuevo;
	l -> tam++;
	
}
void anula(Lista* l){
	Nodo* actual = l->raiz;
	Nodo* primerNodo = l->raiz;
	while(actual != NULL){
		
		if (esVacia(*l) == false){
			l->raiz = primerNodo->sig;
			l->tam--;
			free(primerNodo);
		}
		actual = actual -> sig;
		l->tam--;
	}

}
void eliminaInicio(Lista* l){
	Nodo* primerNodo = l->raiz;
	if (esVacia(*l) == false){
		l->raiz = primerNodo->sig;
		l->tam--;
		free(primerNodo);
	}
}
struct Nodo* obtenNodo(int x){
	struct Nodo* apNodo = (Nodo*) malloc(sizeof(Nodo));
	apNodo->info = x;
	return apNodo;
//para regresar la memoria del nodo
//free(apNodo); apuntador al nodo que queremos eliminar
}
void imprimeLista(Lista* l){
	struct Nodo* actual = l->raiz;
	while( actual != NULL ){
		printf("%d,", actual->info);
		actual = actual->sig;
	}	
}
void inserta(Lista* l, int x, int p){
	struct Nodo* nuevo = obtenNodo(x);
	struct Nodo* anterior = l->raiz;
	if(p == 0){
		insertarInicio(*l,x);	
	}else
		for (int i = 0; i < p; i++)
			anterior = anterior->sig;
		nuevo->sig = anterior->sig;
		anterior->sig = nuevo;
		l -> tam++;
	
}
int recupera(Lista* l,int p){
	struct Nodo* actual = l->raiz;
	for (int i = 0; i < p; ++i)
	{
		actual = actual->sig;
	}
	return actual->info;
}

int buscar(Lista* l, int x){
	struct Nodo* actual = l->raiz;
	int pos = 0;
	while(actual->info != x && actual != NULL){
		actual = actual -> sig;
		pos++;
	}
	return pos;

	
}
void eliminar(Lista* l, int p){
	struct Nodo* anterior = l->raiz;
	struct Nodo* sigPos;
	if (p != 0)
	{
		for (int i = 0; i < p-1; ++i)
			anterior = anterior->sig;
		sigPos = (anterior -> sig) -> sig;
		free(anterior->sig);
		anterior->sig = sigPos;
	}
}

// programa de prueba
/*int main(void)
{
	int opc,lim;
	struct Lista A;
	printf("\t///////////////////////////////////////////////////\n");
	printf("\t///////////////////////////////////////////////////\n");
	printf("\t///////Implementacion de Listas enlazadas//////////\n");
	printf("\t//////	con memoria dinamica    /////////////////\n");
	printf("\t///////////////////////////////////////////////////\n");
	printf("\t///////////////////////////////////////////////////\n");
	getchar();

	printf("selecciona las siguientes opciones:\n");
	printf("1.Crear nueva lista\n2.inserta elementos\n3.mostrar lista\n4.eliminiar elementos\n5.buscar nodo\n");
	scanf("%d",opc);
	getchar();

	switch(opc){
		case 1 :
				
				Lista A;
				creaLista(*A); 
				printf("Lista Creada.\n");
				getchar(); 
		case 2 :
				printf("¿Cuantos elementos deseas ingresar?:\n");
				scanf("%d",&lim);
				printf("Ingresa los elementos:\n");
				for (int i = 0; i < lim; ++i)
				{
					scanf("%d",&elem);
					inserta(*A,elem,lim);
				}
				printf("Elementos capturados.\n");
				getchar();
		case 3 :
				imprimeLista(*A);
				getchar();
		case 4:
						

	}
	return 0;
}*/
