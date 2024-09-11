#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <math.h>
#include <windows.h>
#include <cmath>

int opc, suma, resta, multiplicacion, num1, num2;
float division, raiz, elevacion;
void sumaf(int x, int y); void restaf(int x, int y); void multiplicacionf(int x, int y); void divisionf(int x, int y); void raizf(int x); void elevacionf(int x);
int main(void){//Inicio main
	
	do{
		
		printf("Elige una opci%cn: \n[1]Suma \n[2]Resta \n[3]Multiplicaci%cn \n[4]Divisi%cn \n[5]Ra%cz cuadrada \n[6]Elevacion \n[6]Salir", 162, 162, 162);
		scanf("%d", &opc);
		switch(opc){
		
			case 1:
				printf("\nEscribe n%cmero 1 y n%cmero 2: ", 163, 163);
				scanf("%d %d", &num1, &num2);
				sumaf(num1, num2);
				break;
				
			case 2:
				printf("\nEscribe n%cmero 1 y n%cmero 2: ", 163, 163);
				scanf("%d %d", &num1, &num2);
				restaf(num1, num2);
				break;
				
			case 3:
				printf("\nEscribe n%cmero 1 y n%cmero 2: ", 163, 163);
				scanf("%d %d", &num1, &num2);
				multiplicacionf(num1, num2);
				break;
				
			case 4:
				printf("\nEscribe n%cmero 1 y n%cmero 2: ", 163, 163);
				scanf("%d %d", &num1, &num2);
				divisionf(num1, num2);
				break;
				
			case 5:
				printf("\nEscribe un n%cmero: ", 163);
				scanf("%d", &num1);
				raizf(num1);
				break;
				
			case 6:
				printf("\nEscribe un n%cmero: ", 163);
				scanf("%d", &num1);
				elevacionf(num1);
				break;
				
			default:
				printf("\nOpcio%cn no valida", 162);
				break;
	}
		
	}while(opc != 6);
	
	return 0;
}//Fin main

void sumaf(int x, int y){
	suma = x + y;
	printf("\nEl resultado es: %d", suma);
}

void restaf(int x, int y){
	resta = x - y;
	printf("\nEl resultado es: %d", resta);
}

void multiplicacionf(int x, int y){
	multiplicacion = x * y;
	printf("\nEl resultado es: %d", multiplicacion);
}

void divisionf(int x, int y){
	division = x / y;
	printf("\nEl resultado es: %.2f", division);
}

void raizf(int x){
	raiz = sqrt(x);
	printf("\nEl resultado es: %.2f", raiz);
}

void elevacionf(int x){
	elevacion = pow(x, 2);
	printf("\nEl resultado es: %.2f", elevacion);
}
