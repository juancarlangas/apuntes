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
struct WEB_INFO //CREAMOS UN STRUCT GLOBAL YA QUE A LO
{               //LARGO DEL PROGRAMA SE UTILIZA
    std::string sCorreo;
    std::string sPagina;
    std::string sFacebook;
    std::string sTwitter;
};

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
             <<"TWITTER: "<<xWeb_Info.sTwitter<<"\n\n";

    WEB_INFO *pWeb_Info=&xWeb_Info;

    std::cout<<"DATOS DESDE EL PUNTERO "<<'\n'
             <<"CORREO: "<<pWeb_Info->sCorreo<<'\n'
             <<"FACEBOOK: "<<pWeb_Info->sFacebook<<'\n'
             <<"PAGINA: "<<pWeb_Info->sPagina<<'\n'
             <<"TWITTER: "<<pWeb_Info->sTwitter<<"\n\n";
    
    /*MODIFICANDO DATOS CON EL PUNTERO*/

    pWeb_Info->sCorreo="Picardia99@outlook.com";
    pWeb_Info->sFacebook="TIO PATIÑO";
    pWeb_Info->sPagina="www.PAGINA_RANDOM2.com";
    pWeb_Info->sTwitter="@GELODIAS";

    std::cout<<"DATOS DESDE LA VARIABLE"<<'\n'
             <<"CORREO: "<<xWeb_Info.sCorreo<<'\n'
             <<"FACEBOOK: "<<xWeb_Info.sFacebook<<'\n'
             <<"PAGINA: "<<xWeb_Info.sPagina<<'\n'
             <<"TWITTER: "<<xWeb_Info.sTwitter<<"\n\n";

    
    return 0;
}