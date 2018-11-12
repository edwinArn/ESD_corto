#include <stdio.h>
#include <math.h>

//declaramos la estructura con las variables de x y
struct tpunto{
	float x;
	float y;
}tp1,tp2; //declaramos los invocadores para guardar los valores de los puntos

//declaramos funcion para calcular la distancia le mandamos las estructuras 
float distancia(struct tpunto tp1, struct tpunto tp2){
	float resul;												//declaramos para guardar el resultado de la operacion
	
	resul = sqrt((pow(tp2.x-tp1.x,2))+(pow(tp2.y-tp1.y,2)));	//guardamos el resultado en resul
																//ocupamos sqrt para sacar la raiz cuadrada
																//ocupamos pow para elevar al cuadrado primero ponemos
																//el valor que elevaremos que es la resta de tp2 menos tp1 con
																//x en ambos y luego ponemos al cual se va elevar lo hacemos
																//nuevamente pero con y
	
	return resul;
}

int main(){
	//le da volores a x y y de tp1 y de tp2
	printf("ingrese el primer punto en x \n");
	scanf("%f",&tp1.x);
	printf("ingrese el segund punto en x\n");
	scanf("%f",&tp2.x);
	printf("ingrese el primer punto en y\n");
	scanf("%f",&tp1.y);
	printf("ingrese el segund punto en y\n");
	scanf("%f",&tp2.y);
	
	printf("la distancia es %f",distancia(tp1,tp2)); //llamamos la funcion y mostramos el resultado
	printf("\n");
}
