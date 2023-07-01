/*EN ESTE EJERCICIO VEREMOS COMO ES POSIBLE DEFINIR APUNTADORES A ESTRUCTURAS.

LA SINTAXIS PARA REALIZARLA ES LA SIGUIENTE:
struct Persona *pPersona

La anterior sentencia define un apuntador a una varible que sea del
tipo de struct Persona

Para acceder a los valores de los elementos lo hacemos de 2 formas
1a).-Con el uso del operador -> ejemplo: pPersona->iedad
2da).-Con el uso de * ejemplo: *(pPersona).iedad
*/
#include<iostream>

int  xDato=10;

struct WEB_INFO //CREAMOS UN STRUCT GLOBAL YA QUE A LO
{               //LARGO DEL PROGRAMA SE UTILIZA
    std::string sCorreo;
    std::string sPagina;
    std::string sFacebook;
    std::string sTwitter;
    int *pVariable=&xDato;//PODEMOS ALMACENAR VARIABLES
};  //TIPO POINTER EN LOS STRUCTS

int main(){

    WEB_INFO xWeb_Info;

    xWeb_Info.sCorreo="haljunatruspidewolv@outlook.com";
    xWeb_Info.sFacebook="yeyeyeyye";
    xWeb_Info.sPagina="www.PAGINARANDOM.com";
    xWeb_Info.sTwitter="@JSAOOO";

    std::cout<<"CURSO DE C++\n"
             <<"DATOS DESDE LA VARIABLE"<<'\n'
             <<"CORREO: "<<xWeb_Info.sCorreo<<'\n'
             <<"FACEBOOK: "<<xWeb_Info.sFacebook<<'\n'
             <<"PAGINA: "<<xWeb_Info.sPagina<<'\n'
             <<"TWITTER: "<<xWeb_Info.sTwitter<<"\n\n"
             <<"VALOR DE  LA VARIABLE DESDE EL APUNTADOR\n"
             <<*(xWeb_Info.pVariable)<<'\n' //NOTA POR MAS QUE QUISE NO ME ACEPTO
             <<"LA DIRECCION ALMACENADA DEL APUNTADOR: "//EL OPERADOR FLECHA XD
             <<xWeb_Info.pVariable<<'\n'
             <<">>>>*CAMBIANDO EL VALOR DESDE EL APUNTADOR*<<<< "<<'\n';
             *(xWeb_Info.pVariable)=40;
    std::cout <<"MOSTRANDO EL VALOR MODIFICADO: "<<*(xWeb_Info.pVariable);
    
    return 0;
}