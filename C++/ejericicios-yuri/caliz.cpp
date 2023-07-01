/*PROGRAMA QUE TE DA EL MONTO A PAGAR POR HORA A CADA TRABAJADOR
BASADO EN UN FORMATO 24 HRS Y POR CADA HORA DESPUES DE 8 HRS SE 
LE PAGUE LO DOBLE*/
#include<iostream>

int main(){

      int iHorasTotales; 
        int iHorasBono;
        float fSueldoBase;
        float fMontoBase{100};//SE PAGARA 100 PESOS POR CADA HORA
        float fBono{200};//SE PAGARA EL DOBLE POR CADA HORA DESPUES DE 8HRS
        float fSueldo;
        float fSueldoExtra;
        unsigned int iHoraIngreso;   
        unsigned int iHoraSalida;
        unsigned int iopcion;

              
    do
    {
    std::cout << "HORA DE ENTRADA: ";
    std::cin >> iHoraIngreso;
    std::cout << "HORA DE SALIDA: ";
    std::cin >> iHoraSalida;
        /*NOTA: SI QUIERES IMPLEMENTAR HORA DE ACCESO TAMBIEN
        TENDRAS QUE AUMENTAR LAS HORAS PARA TRABAJAR PERMITIDAS*/
        if(/*(iHoraIngreso <=10 || iHoraIngreso >=7) &&*/ iHoraSalida <= 24)
        {   
            iHorasTotales = iHoraSalida - iHoraIngreso;        
            if(iHorasTotales <=15 && iHorasTotales>0)//MAXIMO PUEDES TRABAJAR 15 HRS
            {
                if(iHorasTotales>8)//SI TRABAJO MAS DE 8 HORAS
                {               //INGRESA A LA CONDICION
                    fSueldoBase = 8 * fMontoBase;  //EL MONTO BASE SE MULTIPLICA 8 HRS
                    iHorasBono = iHorasTotales - 8; //DESPUES SE RESTA PARA SACAR LAS HORAS BONO
                    fSueldoExtra = iHorasBono * fBono; //AQUI MULTIPLICAMOS POR EL BONO CADA HORA
                    fSueldo = fSueldoExtra + fSueldoBase;//PARA EL SUELDO TOTAL SUMAS

                    std::cout<<"HORAS TOTALES: " << iHorasTotales << '\n';//DESPLEGAMOS HORAS
                    std::cout << "AQUI ESTA EL MONTO A PAGAR:" << fSueldo;//DESPLEGAMOS MONTO
                    iopcion = 2;//SECUENCIA DE ESCAPE
                }//CIERRE DEL TERCER IF
                else
                {
                    fSueldo = iHorasTotales * fMontoBase;//MULTIPLICAMOS LAS HORAS POR DINERO
                    std::cout<<"HORAS TOTALES: " << iHorasTotales << '\n';//DESPLEGAMOS HORAS
                    std::cout << "AQUI ESTA EL MONTO A PAGAR:" << fSueldo;//DESPLEGAMOS
                    iopcion = 2;//SECUENCIA DE ESCAPE
                }//CIERRE DEL SEGUNDO ELSE
            }//CIERRE DEL SEGUNDO IF
            else
            {
                std::cout << "DATO INVALIDO, INTENTE DE NUEVO=[1] SALIR[2]";
                std::cin >> iopcion;
            }//CIERRE DEL SEGUNDO ELSE
                
        }//CIERRE DEL PRIMER IF
        else
         {
            std::cout << "DATO INVALIDO, INTENTE DE NUEVO=[1] SALIR[2] : ";//SI DIGITA UN NUMERO
            std::cin >> iopcion;              //MAYOR A 24 HRS MARCARA OPCION NO VALIDA
        }//CIERRE DEL PRIMER ELSE
    }while(iopcion == 1);//EL BUCLE SE IMPLEMENTARA SIEMPRE Y CUANDO 
                        //EL USUARIO ASI LO DESEE
        
        return 0;
}