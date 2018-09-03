#include <stdio.h>
#define tamano 5

int main (){
	int sala[tamano][tamano];
	int fil,col,opcion,opci;
	float ganancia=0;
	
	for(fil=0;fil<tamano;fil++){
		for(col=0;col<tamano;col++){
			sala[fil][col]=0;
		}
	}
	
	do{
		printf("Eliga la opcion que desea realizar\n");
		printf("1 - Vender entradas\n");
		printf("2 - Mostrar ganancias\n");
		printf("Cualquiera otr numero para salir\n");
		printf("\n");
		scanf("%d",&opcion);
		printf("\n");
		printf("\n");
		
		if(opcion==1){
			printf("Eliga el asiento que desea ocupar\n");
			printf("Primera fila de 1 a 5 - valor $5.0\n");
			printf("segunada fila de  6 a 10 - valor $3.50\n");
			printf("Tercera fila de 11 a 15 - valor $3.50\n");
			printf("Cuarta fila de 16 a 20 - valor $3.50\n");
			printf("quinta fila de 21 a 25 - valor $2.50\n");
			printf("\n");
			scanf("%d",&opci);
			printf("\n");
			
			printf("\n");
			if(opci>0 && opci<6){
				
				if (sala[4][opci-1]==1){
					printf("El asiento esta ocupado\n\n");
				}else{
					sala[4][opci-1]=1;
					ganancia=ganancia+5;
				
					for(fil=0;fil<tamano;fil++){
						for(col=0;col<tamano;col++){
						printf("%d\t",sala[fil][col]);
						}
						printf("\n");
					}
					printf("\n");	
				}
				
				
			}else if(opci>5 && opci<11){
				opci=opci-6;
				
				if (sala[3][opci]==1){
					printf("El asiento esta ocupado\n\n");
				}else{
					sala[3][opci]=1;
					ganancia=ganancia+3.5;
				
					for(fil=0;fil<tamano;fil++){
						for(col=0;col<tamano;col++){
						printf("%d\t",sala[fil][col]);
						}
						printf("\n");
					}
					printf("\n");	
				}
				
			}else if(opci>10 && opci<16){
				opci=opci-11;
				
				if (sala[2][opci]==1){
					printf("El asiento esta ocupado\n\n");
				}else{
					sala[2][opci]=1;
					ganancia=ganancia+3.5;
				
					for(fil=0;fil<tamano;fil++){
						for(col=0;col<tamano;col++){
						printf("%d\t",sala[fil][col]);
						}
						printf("\n");
					}
					printf("\n");	
				}
				
			}else if(opci>15 && opci<21){
				opci=opci-16;
				
				if (sala[1][opci]==1){
					printf("El asiento esta ocupado\n\n");
				}else{
					sala[1][opci]=1;
					ganancia=ganancia+3.5;
				
					for(fil=0;fil<tamano;fil++){
						for(col=0;col<tamano;col++){
						printf("%d\t",sala[fil][col]);
						}
						printf("\n");
					}
					printf("\n");	
				}
				
			}else if(opci>20 && opci<26){
				opci=opci-21;
				
				if (sala[0][opci]==1){
					printf("El asiento esta ocupado\n\n");
				}else{
					sala[0][opci]=1;
					ganancia=ganancia+2.5;
				
					for(fil=0;fil<tamano;fil++){
						for(col=0;col<tamano;col++){
						printf("%d\t",sala[fil][col]);
						}
						printf("\n");
					}
					printf("\n");	
				}
			}
		}else if(opcion==2){
			printf("Las ganancias que hay en el momento son : \n$");
			printf("%f",ganancia);
			printf("\n");
			printf("\n");
		}
		
	}while(opcion>0 && opcion<3);
	return 0;
}
