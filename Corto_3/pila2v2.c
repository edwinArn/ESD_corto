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
	printf("Normal \t Invertido\n");
	while(reco!=NULL){
		printf("%i \t",reco->info);
		int x=reco->info;
		if (x>9){
			int y=0;
			do{ 
			y=y*10+(x%10);
			x=x/10; 
		}while(x!=0);
		x=y;
		}
		printf("   %d ",x);
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
