/*PROGRAMA QUE TE DA EL MONTO A PAGAR POR HORA A CADA TRABAJADOR BASADO EN UN FORMATO 24 HRS
* Y POR CADA HORA DESPUES DE 8 HRS SE LE PAGUE LO DOBLE*/

#include <iostream>

#define SALIDA_MAXIMA	    24
#define HORAS_OBLIGATORIAS  8
#define MAX_HORAS_PERMITIDAS 15

int32_t main()
{
    int32_t horas_totales { 0 };
    int32_t horas_base { 0 };
    int32_t horas_extra { 0 };
    uint32_t hora_entrada;
    uint32_t hora_salida;

    float pago_total;

    float salario_base { 100 }; //SE PAGARA 100 PESOS POR CADA HORA
    float salario_extra { 200 }; //SE PAGARA EL DOBLE POR CADA HORA DESPUES DE 8HRS

    uint32_t opcion;

    do {
	std::cout << "HORA DE ENTRADA: ";
	std::cin >> hora_entrada;
	std::cout << "HORA DE SALIDA: ";
	std::cin >> hora_salida;

	horas_totales = hora_salida - hora_entrada;

	/* El trabajador debe salir antes de la SALIDA_MAXIMA y además sus horas de trabajo
	* deben ser entre 0 y MAX_HORAS_PERMITIDAS */
	if ( ( 0 < horas_totales ) and ( horas_totales <= MAX_HORAS_PERMITIDAS )
	    and ( hora_salida <= SALIDA_MAXIMA ) ) {

	    // Si trabajó horas extras
	    if ( horas_totales > HORAS_OBLIGATORIAS ) {
		horas_base = HORAS_OBLIGATORIAS;
		horas_extra = horas_totales - HORAS_OBLIGATORIAS;
	    }
	    else
		horas_base = horas_totales;

	    pago_total = horas_base * salario_base + horas_extra * salario_extra;

	    std::cout<<"HORAS TOTALES: " << horas_totales << '\n';//DESPLEGAMOS HORAS
	    std::cout << "AQUI ESTA EL MONTO A PAGAR:" << pago_total;//DESPLEGAMOS MONTO
		opcion = 2;
	}
	else
	{
	    std::cout << "DATO INVALIDO, INTENTE DE NUEVO=[1] SALIR[2]";
	    std::cin >> opcion;	
	}

    } while( opcion == 1 ); // EL BUCLE SE IMPLEMENTARA SIEMPRE Y CUANDO 
			    // EL USUARIO ASI LO DESEE

    std::cout << std::endl;

    return EXIT_SUCCESS;
}
