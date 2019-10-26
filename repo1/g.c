#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int op1, op2, opc,resultado;
	
	{
	 printf("calculadora");
	 printf("1.-suma");
	 printf("2.-resta");
	 printf("3.-multiplicacion");
	 printf("4-.division");
	 prinft("5.-raUpdate problema3.ciz cuadrada");
	 scan("%i", &opc);
	
	 printf("primer operador: ");
	 scanf("%i", &op1);
	 printf("segundo operador: ");
	 scanf("%i", &op2);
	}
	switch(opc){
	 
	 case 1:
	      resultado=op1+op2;
	      printf("el resultado de la suma es %i",resultado);
	      break;
	 case 2:
	 	  resultado= op1-op2;
	 	  printf("el resultado de la resta es %i",resultado);
	 	  break;
     case 3:
	      resultado=op1*op2;
		  printf("el resultado de la multiplicacion es &i",resultado);
		  break;
	 case 4:
	      resultado=op1/op2;
		  printf("el resultado de la division es &i",resultado);
	 
	}
return 0;


	

