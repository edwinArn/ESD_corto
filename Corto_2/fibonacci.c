#include <stdio.h>


//declaramos la funcion como un entero se le manda un valor n
int fibonacci(int n){
	if(n>2){								//si es n es mayor a 2 se hara lo siguiente
	return fibonacci(n-1)+fibonacci(n-2);	//ya mamos la funcion de fibanacci restandole uno a n y sumamos 
											//nuevamente la misma funcion pero restandole a n-2
	}else {
	return 1;								//si es menor a 2 se devolvera
	}
}

int main(){
	//pedimos hasta la posicin que quiere el usuario
	int numero;
	printf("ingrese hasta que posicion quiere la sucesion de fibonacci\n");
	scanf("%d",&numero);
	
	//creamos un bucle e iniciamos variable n en 1
	for(int n=1;n<=numero;n++){
		printf("%d  ",fibonacci(n)); //inprimimos los valores llamando la funcion fibonacci
									 //a la cual le ingresamos varible n hasta que n sea igual a numero
	}
}
