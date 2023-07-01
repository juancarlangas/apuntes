#include <iostream>
#include <cstring> // Incluimos la librería <string.h> para C++ para poder usar strlen()
#include "funciones.hpp"//Libreria fucniones

/* Como vamos a manejar un largo de cadena de 256 y vamos a estar utilizando dicho número,
 * nos valemos de un macro para expresarlo mejor y tener mayor control */
#define MAX_STRING 256


int main()/*{{{*/
{
    
    char cCadena[MAX_STRING];	// Trataremos de separar en líneas independientes las declaraciones de
    char cDecision;	// variable que no tienen mucho que ver entre sí

    int iOpcion;

        do 
		{
            std::cout	<< "\n\nBIENVENIDO A MUNDO DE LAS CADENAS ESTAS SON LAS OPCIONES:\n\n"

			<< "[1] SUSTITUIR UNA LETRA DE UNA CADENA\n"
			<< "[2] VOLTEAR UNA CADENA\n"
			<< "[3] ORDENAR UNA CADENA DE MAYOR A MENOR O DE MENOR A MAYOR CARACTERES(ASCII)\n"
			<< "[4] BUSCAR UNA LETRA EN UNA CADENA \n"
			<< "[5] XXXXSALIRXXXX\n\n"

			<<"POR FAVOR DIGITE UNA OPCION: ";

       		std::cin >> iOpcion;
	    	std::cin.ignore(); // Si vamos a limpiar el buffer, mejor hacerlo aquí

	    	switch ( iOpcion ) 
			{
				case 1: 
		
		    		std::cout << "\nHAZ ELEGIDO LA OPCION 1: "
			      	  <<"\nINGRESA LA CADENA:";
		    		// Vamos a leer la cadena con std::fgets()
		    		std::fgets( cCadena, MAX_STRING, stdin );

		    
		    		cCadena[ strlen( cCadena ) - 1 ] = '\0';

		    		sustituir_letra( cCadena );

		    		std::cin.ignore();
		    		std::cout << "\n\nQUIERES VOLVER AL MENU DE OPCIONES? \n\n[S]SI [N]NO: ";
		    		std::cin >> cDecision;

		    	break;

				case 2:

		 			std::cout << "HAZ ELEGIDO LA OPCION 2: \n"
			     	  	  	  << "INGRESA LA CADENA: ";
		    		std::fgets( cCadena , MAX_STRING , stdin);

					cCadena[ strlen ( cCadena ) - 1] = '\0';
			
					invertir_cadena( cCadena );

					std::cin.ignore();
					std::cout << "\n\nQUIERES VOLVER AL MENU DE OPCIONES? \n\n[S]SI [N]NO: ";
					std::cin >> cDecision;

		    	break;
		    
				case 3:

					std::cout << "HAZ ELEGIDO LA OPCION 3: \n"
					          << "INGRESA LA CADENA: ";
					std::fgets( cCadena , MAX_STRING , stdin );

					cCadena[ strlen ( cCadena ) -1 ] = '\0';

					ordenar_cadena( cCadena );

					std::cin.ignore();
					std::cout << "\n\nQUIERES VOLVER AL MENU DE OPCIONES? \n\n[S]SI [N]NO: ";
					std::cin >> cDecision;

				break;
		   
				case 4:

					std::cout << "HAZ ELEGIDO LA OPCION 4: \n"
					          <<"INGRESA LA CADENA: ";
					std::fgets( cCadena, MAX_STRING, stdin);

					cCadena[ strlen( cCadena ) - 1 ] = '\0';

					encontrar_letra( cCadena );

					std::cin.ignore();
		    		std::cout << "\n\nQUIERES VOLVER AL MENU DE OPCIONES? \n\n[S]SI [N]NO: ";
		    		std::cin >> cDecision;

				break;

				case 5:

		    		std::cout << "HASTA LA VISTA :)"; 
		    		cDecision ='N';

		    	break;

				default:

					std::cout << "\n\n<<<<<<<<<<<<OPCION NO VALIDA>>>>>>>>>>>";
		    		cDecision = 'S';

		    	break;
        	}

        } while( cDecision =='S'|| cDecision =='s');


    return EXIT_SUCCESS;
}/*}}}*/

