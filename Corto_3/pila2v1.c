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
	if (x>9){
		int y=0;
		do{ 
			y=y*10+(x%10);
			x=x/10;
		}while(x!=0);
		x=y;
	}
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


int main(){
	insertar(1087);
	insertar(152);
	insertar(40);
	insertar(3);
	imprimir();
	return 0;
}
