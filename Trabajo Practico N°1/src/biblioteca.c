/*
 * biblioteca.c
 *
 *  Created on: 14 abr. 2021
 *      Author: floor
 */
#include "bibliotecas.h"


int suma (int numeroA , int numeroB)
{
	int resultado;
	resultado = numeroA + numeroB;
	return resultado;
}

int resta(int numeroA,int numeroB)
{
	int resultado;
	resultado = numeroA - numeroB;
	return resultado;
}

int multiplicar(int numeroA,int numeroB)
{
	int resultado;
	resultado = numeroA * numeroB;
	return resultado;
}

float dividir(float numeroA,float numeroB)
{
	float resultado;

	resultado = numeroA / numeroB;

	return resultado;
}

int factorial (int numeroA)
{
	int resultado;
	if (numeroA == 0)
		return 1;
	resultado = numeroA * factorial(numeroA-1);
	return resultado;
}
