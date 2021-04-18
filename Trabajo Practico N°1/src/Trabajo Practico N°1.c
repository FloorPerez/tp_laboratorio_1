/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Perez Florencia 1F
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"



int main() {

	  int opcion;
	  int numeroUno;
	  int numeroDos;
	  int resultadosuma;
	  int resultadoresta;
	  int resultadomultiplicacion;
	  float resultadodivision;
	  int resultadofactorial;
	  int resultadofactorialDos;


	  setbuf (stdout , NULL);
	    do
	    {
	     printf( "1- Ingrese primer operando A:\n " );
	     printf( "2- Ingrese segundo operando B :\n " );
	     printf( "3- Realize todas las operaciones :\n'Suma'\n'Resta'\n'Multiplicacion'\n'Division'\n'Factorial'\n ");
	     printf( "4- Informar resultados :\n " );
	     printf( "5-Salir \n " );
	     printf( "Elija una opcion : '1' '2' '3' '4' '5'\n " );
	     fflush(stdin);
	     scanf("%d",&opcion);


	       switch (opcion)
	        {
	         case 1:
	         printf ("ingrese operando A");
	         scanf ("%d",&numeroUno);
	         break;
             case 2:
	         printf ("ingrese operando B");
	         scanf ("%d",&numeroDos);
	         break;
             case 3:
	         resultadosuma = suma(numeroUno,numeroDos);
	         resultadoresta = resta (numeroUno, numeroDos);
	         resultadomultiplicacion = multiplicar (numeroUno,numeroDos);
	         resultadodivision = dividir (numeroUno, numeroDos);
	         resultadofactorial = factorial (numeroUno);
	         resultadofactorialDos = factorial (numeroDos);
	         printf("Las operaciones se realizaron correctamente");
	         break;
             case 4:
	         printf("El resultado de la suma es %d ", resultadosuma);
	         printf("El resultado de la resta es %d ", resultadoresta);
	         printf("El resultado de la multiplicacion es %d ",resultadomultiplicacion);
	         printf("El resultado de la division es %f ", resultadodivision);
	         printf("El resultado de el factorial es %d ",resultadofactorial);
	         printf("El resultado de el factorial es %d ",resultadofactorialDos);
	         break;
	         case 5:
	         printf("salir");
	         break;

	    }
}           while(opcion  >1 || opcion<5);

	  return 0;
}

