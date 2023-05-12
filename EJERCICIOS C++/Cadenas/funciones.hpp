//ESTA ES LA LIBRERIA PARA HACER JALAR EL EJERCICIO

void sustituir_letra( char *_Cadena )/*{{{*/
{
    char letra_antigua;
    char letra_nueva;
    int iContador { 0 };
    // Espacio
    std::cout << "POR FAVOR INTRODUZCA LA LETRA QUE QUIERES SUSTITUIR:";
    std::cin >> letra_antigua;
    std::cin.ignore();
    std::cout << "\nAHORA INTRODUZCA LA NUEVA LETRA: ";
    std::cin >> letra_nueva;
    std::cin.ignore();
    while( _Cadena[iContador] != '\0' ) {
	if ( _Cadena[ iContador ] == letra_antigua )
	    _Cadena[ iContador ] = letra_nueva;
        ++iContador; 
    }

    std::cout << "\nESTA ES LA CADENA: "<< _Cadena << std::endl;
}/*}}}*/



void invertir_cadena(char *cCadenaInvertir)
{
	int iContador1{0},iContador2{0};
	char cVariable_aux;

		while(cCadenaInvertir[iContador1]!='\0'){
			
			iContador2=iContador1;//PARA QUE NO VUELVA A INICIAR DESDE LA POSICION 0
			while (cCadenaInvertir[iContador2]!='\0')	//EL CONTADOR 2
			{
				
					//CAMBIO DE VALOR DE VARIABLE METODO BURBUJA
					cVariable_aux = cCadenaInvertir[ iContador1 ];
					cCadenaInvertir[ iContador1 ] = cCadenaInvertir[ iContador2 ];
					cCadenaInvertir[ iContador2 ] = cVariable_aux;
					
							
				++iContador2;
			}
			
			++iContador1;
		}

		std::cout << "LA CADENA EN INVERTIDA ES: ";

		for(iContador1 = 0;cCadenaInvertir[ iContador1 ] != '\0'; ++iContador1){
			std::cout<<cCadenaInvertir[ iContador1 ];
		}


}

void ordenar_cadena(char *cCadenaOrdenar)
{
	int iContador1{0},iContador2{0};
	char cVariable_aux;
	int iEleccion;
		std::cout << "ESTAS SON LAS OPCIONES: 1.-ORDENAR MAYOR A MENOR 2.-MENOR A MAYOR: ";
		std::cin >> iEleccion;
		while( cCadenaOrdenar[ iContador1 ] != '\0'){
			
			iContador2 = iContador1;
			while ( cCadenaOrdenar[ iContador2 ] != '\0')
			{
				if(iEleccion == 1){

					if(cCadenaOrdenar[ iContador1 ] < cCadenaOrdenar[ iContador2 ])
					{

					cVariable_aux = cCadenaOrdenar[ iContador1 ];
					cCadenaOrdenar[ iContador1 ] = cCadenaOrdenar[ iContador2 ];
					cCadenaOrdenar[ iContador2 ] = cVariable_aux;

					}
				}else
				{

					if(cCadenaOrdenar[ iContador1 ] > cCadenaOrdenar[ iContador2 ])
					{

					cVariable_aux = cCadenaOrdenar[ iContador2 ];
					cCadenaOrdenar[ iContador2 ] = cCadenaOrdenar[ iContador1 ];
					cCadenaOrdenar[ iContador1 ] = cVariable_aux;

					}

				}		

				++ iContador2;
			}
			
			++ iContador1;
		}

		std::cout<<"LA CADENA EN ORDEN ES: ";

		for(iContador1 = 0; cCadenaOrdenar[ iContador1 ] !='\0';++iContador1)
        {
			std::cout << cCadenaOrdenar[ iContador1 ];
		}
}

void encontrar_letra(char *cCadenaEncontrar)
{
	int cPosiciones_Letras[ MAX_STRING];
	char cLetra_Contar;
	int iContador{ 0 };
	int iContador_Letra{ 0 };

	std::cout << "INGRESE LA LETRA QUE QUIERES CONTAR: ";
	std::cin >> cLetra_Contar;

	while(cCadenaEncontrar[ iContador ] !='\0'){

		if(cCadenaEncontrar[ iContador ] == cLetra_Contar){

			cPosiciones_Letras[ iContador_Letra ] = iContador;
			iContador_Letra ++;
		} 

		++ iContador;
	}

	std::cout << "ESTA ES LA CANTIDAD DE VECES QUE LA LETRA: "
			<< cLetra_Contar
			<< "\nAPARECE EN LA CADENA: "
			<< iContador_Letra
			<< "\nEN LAS POSICIONES: ";

			for(iContador = 0;iContador < iContador_Letra;++ iContador){
					std::cout << cPosiciones_Letras[ iContador ]<< ",";
			}
}