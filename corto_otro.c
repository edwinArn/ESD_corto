#include <stdio.h>

int main() {
    int fil,col,filas,columnas;
    
    //tamaño de las filas y columnas de las matricez
    printf("Ingrese el numero de filas\n");
    scanf("%d",&filas);
    printf("Ingrese el numero de columnas\n");
    scanf("%d",&columnas);
    int A[filas][columnas];
    int B[filas][columnas];
    int C[filas][columnas];
    
    //ingreso de los valores de la matriz A
    printf("Ingrese la matriz A\n");
    for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
            printf("ingrese el numero en la posicion %d%d\n",fil,col);
            scanf("%d",&A[fil][col]);
        }
    }
    //ingreso de los valores de la matriz B
    printf("Ingrese la matriz B\n");
    for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
            printf("ingrese el numero en la posicion %d%d\n",fil,col);
            scanf("%d",&B[fil][col]);
        }
    }
    
   //multiplicacion de matriz A por matriz B
    for (fil=0;fil<filas;fil++) {
        printf("\n");
        for (col=0;col<columnas;col++) {
            C[fil][col]=B[col][fil]*A[fil][col];
        }
    }
    
    //mostrando la resultante de AxB en matriz C
    printf("Matriz C");
    for (fil=0;fil<filas;fil++) {
        printf("\n");
        for (col=0;col<columnas;col++) {
            printf("%d\t",C[fil][col]);
        }
    }
    printf("\n");
    printf("\n");
    
    int cont2,cont,tamano=0;
    
    //tamaño del vector
    for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
			cont2=0;
			if(C[fil][col]>1){
				for(cont=1;cont<=C[fil][col];cont++){
					if(C[fil][col]%cont==0){
						cont2++;
					}
				}
				if(cont2<=2){
					tamano++;
				}
			}
        }
    }
    
    int vector[tamano];
    int cont3=0;
    
    //Llenado del vector y muestra del numero primo y su posicion
    printf("posicion   ---   primo\n");
     for (fil=0;fil<filas;fil++) {
        for (col=0;col<columnas;col++) {
			cont2=0;
			if(C[fil][col]>1){
				for(cont=1;cont<=C[fil][col];cont++){
					if(C[fil][col]%cont==0){
						cont2++;
					}
				}
				if(cont2<=2){
					printf("  %dx%d              %d\n",fil,col,C[fil][col]);
					vector[cont3]=C[fil][col];
					cont3++;
				}
			}
        }
    }
    printf("\n");
    
    //ordenamiento del vector en forma ascendente
    int burbuja;
    for(cont=0;cont<tamano;cont++){
		for(cont2=0;cont2<tamano;cont2++){
			if(vector[cont]<vector[cont2]){
				burbuja=vector[cont2];
				vector[cont2]=vector[cont];
				vector[cont]=burbuja;
			}
		}
	}
	
	printf("valores dentro del vector enforma ascendente\n");
	//mostrando el vector
	for(cont=0;cont<tamano;cont++){
		printf("%d\t",vector[cont]);
	}
    return 0;
}
