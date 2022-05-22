/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que calcule la suma de la serie 1/1 + 1/2 + 1/3 + ... + 1/N
	donde N es un numero que se introduce por teclado 
	*/
	
#include <stdio.h>

int main(){
	float suma;
	int numero;
	
	printf("Introduce un numero: ");
	scanf("%d",&numero);
	
	for(int i;i<=numero;i++){
		suma=suma+(1/(float)i);
	}
	printf("\nla suma es de %.4f",suma);
}
