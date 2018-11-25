#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int info;
	struct nodo *sig;
};
struct nodo *raiz=NULL;

void insertar(int x){
	struct nodo *nuevo;
	nuevo = malloc(sizeof(struct nodo));
	nuevo->info=x;
	if(raiz==NULL){
		raiz=nuevo;
		nuevo->sig=NULL;
	}
	else{
		nuevo->sig=raiz;
		raiz=nuevo;
	}
}

void imprimir(){
	struct nodo *reco=raiz;
	printf("Lista completa.\n");
	while(reco!=NULL){
		printf("%i ",reco->info);
		reco=reco->sig;
		printf("\n");
	}
	printf("\n");
}

void remplazar(struct nodo *pila, int nuevo, int viejo){
	int encontrado=1;
	if(pila!=NULL){
		while(pila!=NULL){
			if(pila->info==viejo){
				pila->info=nuevo;
				encontrado=0;
			}
			pila=pila->sig;
		}
		if (encontrado==1){
				printf("Numero no encontrado\n");
		}
	}else{
		printf("La pila esta vacia\n");
	}
}

int main(){
	int nuevo,viejo;
	insertar(10);
	insertar(40);
	insertar(3);
	imprimir();
	
	printf("ingrese el valor que desea reemplazar \n");
	scanf("%d",&viejo);
	printf("ingrese el nuevo valor\n");
	scanf("%d",&nuevo);
	
	remplazar(raiz,nuevo,viejo);
	imprimir();
	
	return 0;
}
