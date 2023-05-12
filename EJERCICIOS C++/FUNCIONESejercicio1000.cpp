/*programa que pide al usuario si quiere cambiar cualquier letra de una cadena de 
caracteres que se muestra en pantalla
capturar esa letra y sustituirla pero siempre preguntar al usuario si quiere hacerlo otra vez
ejecutar el programa hasta que el usuario lo desee*/

#include<iostream>


void SUSTITUIR_LETRA(char cCadenaCambiar[]);
void VOLTEAR_CADENA(char cCadenaVoltear[]);
void ORDENAR_CADENA(char cCadenaVoltear[]);
int main(){

    char cCadena[255],cDecision;
    int iOpcion;

        do{

            std::cout<<"\n\nBIENVENIDO A MUNDO DE LAS CADENAS ESTAS SON LAS OPCIONES:\n\n"
                     <<"[1] SUSTITUIR UNA LETRA DE UNA CADENA\n"
                     <<"[2] VOLTEAR UNA CADENA\n"
                     <<"[3] ORDENAR UNA CADENA DE MAYOR A MENOR CARACTERES\n"
                     <<"[4] XXXXSALIRXXXX\n\n"
                     <<"POR FAVOR DIGITE UNA OPCION: ";                 
            std::cin>>iOpcion;
            switch (iOpcion)
            {
            case 1:
            std::cin.ignore();
                std::cout<<"\nHAZ ELEGIDO LA OPCION 1: "
                         <<"\nINGRESA LA CADENA:";
                gets(cCadena);
                SUSTITUIR_LETRA(cCadena);
                std::cin.ignore();
                std::cout<<"\n\nQUIERES VOLVER AL MENU DE OPCIONES? \n\n[S]SI [N]NO: ";
                std::cin>>cDecision;
                break;
            case 2:
                std::cout<<"HAZ ELEGIDO LA OPCION 2:\n"
                         <<"INGRESA LA CADENA: ";
                std::cin>>cCadena;
                VOLTEAR_CADENA(cCadena);
                break;
            case 3:
                std::cout<<"HAZ ELEGIDO LA OPCION 3: \n"
                         <<"INGRESA LA CADENA: ";
                std::cin>>cCadena;
                ORDENAR_CADENA(cCadena);
                break;
            case 4:
                std::cout<<"HASTA LA VISTA :)"; 
                cDecision='N';      
                break;            
            default:
                    std::cout<<"\n\n<<<<<<<<<<<<OPCION NO VALIDA>>>>>>>>>>>";
                cDecision='S';    
                break;
            }           

        }while(cDecision=='S'|| cDecision=='s');


    return EXIT_SUCCESS;
}

void SUSTITUIR_LETRA(char cCadenaCambiar[]){
    char cQuitar_Letra;
    char cNueva_Letra;
    int iContador{0};
    std::cout<<"POR FAVOR INTRODUZCA LA LETRA QUE QUIERES SUSTITUIR:";
    std::cin>>cQuitar_Letra;
    std::cin.ignore();
    std::cout<<"\nAHORA INTRODUZCA LA NUEVA LETRA: ";
    std::cin>>cNueva_Letra;
    while(cCadenaCambiar[iContador]!='\0'){
        cCadenaCambiar[iContador] == cQuitar_Letra ? 
        cCadenaCambiar[iContador]=cNueva_Letra :
        ++iContador;
    }
    std::cout<<"\nESTA ES LA CADENA: "<<cCadenaCambiar;
}

void VOLTEAR_CADENA(char cCadenaVoltear[]){

}

void ORDENAR_CADENA(char cCadenaVoltear[]){

}