/**
@file lab1.cpp
@brief Se hace un breve descipción del codigo
@author ANDRES CORREA, NEIL GUTIERREZ
@date 05/09/2014


Esta es una funcion para saber el algoritmo de huffman

*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int i, n, n1, aleatorio, P=1, U=10;
 char txt[10];
 int frecu();
/**
@brief funcion a probar
@param argc 
@param argv 

*/

int main(int argc,char *argv[])
{ 
             /*Petición y contador de caracteres de frase a codificar*/
           printf("Introduzca una frase:\n"); 
                   for(n=0;(txt[n]=getchar()) != '\n';++n); 
txt[n]='\0'; 

printf("La palabra %s tiene %d letras.\n",txt,n); 


/*Generación de número al azar por letra introducida*/

int i,j,max=txt[n],letras,con=0;
	for(i=0;i<max;i++);
    {
    	for(j=0;j<max;j++)
    	{
    		if(letras[i]==letras[j])
            {con++;frecuencias[i]=con;}
    	}
    	con=0;
    	printf("la fruecuencia es :",con,n);
    }
}
system("PAUSE");

return 0;
}

//QUIUBO ANDRES QUE MAS XD, arregle algo de ortografia
