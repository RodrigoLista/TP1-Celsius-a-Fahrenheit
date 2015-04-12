/*
 ============================================================================
 Name        : celsFarh.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */


/* Lista Rodrigo

 * 12/04/2015
 
* Este programa convierte temperatura que se encuentran en grados Celsius (de 0 a 30)
 * a Fahrenheit. Y muestra por pantalla dos columnas, una con la temperatura 

 * en grados Celsius y al lado su conversion en Fahrenheit.

*/


#include <stdio.h>






int main() {

   
float fahrenheit=0;
  
 float celsius;
  
 for(celsius = 0; celsius <= 30;++celsius){
           fahrenheit=(celsius*9)/5+32;
   
    printf("%.0f\t%.2f\n",celsius,fahrenheit);

          }
	
return 0;

}
