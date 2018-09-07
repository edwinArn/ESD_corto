#include <stdio.h>

int main (){
	int tamano,cont,cont2;
	printf("ingrese el tamano del vector\n");
	scanf("%d",&tamano);
	int vector[tamano];
	
	for(cont=0;cont<tamano;cont++){
		vector[cont]=0;
	}
	
	//llenadodel vector
	for(cont=0;cont<tamano;cont++){
		printf("ingrese un valor\n");
		scanf("%d",&vector[cont]);
		for (cont2=0;cont2<tamano;cont2++){
			if(cont2!=cont){
				if(vector[cont]==vector[cont2]){
					do{
						printf("valor inngresado repetido, ingrese un nuevo valor\n");
						scanf("%d",&vector[cont]);
					}while(vector[cont]==vector[cont2]);
				}
			}
		}
	}
	
	//ordenamiento del vector en forma descendente
    int burbuja;
    for(cont=0;cont<tamano;cont++){
		for(cont2=0;cont2<tamano;cont2++){
			if(vector[cont]>vector[cont2]){
				burbuja=vector[cont2];
				vector[cont2]=vector[cont];
				vector[cont]=burbuja;
			}
		}
	}
	printf("\n");
	printf("valores dentro del vector en forma descendente\n");
	//mostrando el vector
	for(cont=0;cont<tamano;cont++){
		printf("%d\t",vector[cont]);
	}
	printf("\n");
	printf("\n");
	//media aritmetica
	int suma;
	for(cont=0;cont<tamano;cont++){
		suma+=vector[cont];
	}
	printf("La media aritmetica es: %d\n",suma/tamano);
	printf("\n");
	printf("mayor:  %d\n",vector[0]);
	printf("menor:  %d\n",vector[tamano-1]);
	return 0;
}
