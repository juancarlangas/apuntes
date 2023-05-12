/*ES POSIBLE DEFINIR VARIABLES TIPO ESTRUCTURA DENTRO DE UN STRUCT,
Y DE ESTA FORMA PODER APROVECHAR LAS DECLARACIONES PREVIAS:
SI ESTAS SE ADECUAN A LA INFORMACION QUE QUEREMOS ESTABLECER

A DIFERENCIA DE C, EN C++ CUANDO DECLARAMOS ESTRUCTURAS INTERNAS, NO PODEMOS
HACER REFERENCIA A ELLAS PARA DECLARAR VARIABLES, TAL Y COMO C LO PERMITE*/

#include<iostream>
struct WEB_INFO //CREAMOS UN STRUCT GLOBAL YA QUE A LO
{               //LARGO DEL PROGRAMA SE UTILIZA
    std::string sCorreo;
    std::string sPagina;
    std::string sFacebook;
    std::string sTwitter;
};
struct EDITORIAL
{
    int iIde;
    std::string sNom;
    struct WEB_INFO xWebInfo; //AQUI INDEXAMOS EL ESTRUCT WEB_INFO  
    struct DIRECCION            //Y CREAMOS UN OBJETO xWebInfo PARA ACCEDER A
    {                           //SUS VARIABLES
        std::string sCalle;
        std::string sNumero;
        std::string sCiudad;
        std::string sEstado; //CREAMOS UN STRUCT ANIDADO PARA DEMOSTRAR 
        std::string sCp;    //QUE ES POSIBLE ACCEDER ASUS CAMPOS
    }xDireccion;

};
struct LIBRO
{
        std::string sISBN;
        std::string sTit;
        std::string sAut;
        std::string sFecha;
        int         anio;
        struct FECHA{
            int dia,mes,anio;
        }xFechaCompra;   
};

struct CLIENTE
{
    int iIDE;
    std::string sNomb;
    struct DIRECCION
    {
        std::string sCalle;
        std::string sNum;
        std::string sCiud;
        std::string sEstado;
        std::string sCp;
    }xDireccion;    //AQUI YACE LO ANTES MENCIONADO, EN C ESTO HUBIESE SIDO 
            //UN ERROR YA QUE LO TOMARIA COMO DIRECCION xDIreccion 
};          //YA HA SIDO CREADO EN EL struct EDITORIAL.


int main(){

    WEB_INFO xWeb_Info;
    EDITORIAL xEditorial;
    LIBRO xLibro;
    CLIENTE xCliente,xCliente2;

    
    xCliente.sNomb="JULIO";
    xCliente.xDireccion.sCalle="NAUCALPAN";
    xCliente.xDireccion.sCiud="MARAMOROS";
    xCliente.xDireccion.sEstado="MICHOACAN";
    xCliente.xDireccion.sNum="#59-A";
    xCliente.xDireccion.sCp="1845";

    std::cout<<"DATOS DEL CLIENTE: "<<'\n'
             <<"NOMBRE: "<<xCliente.sNomb<<'\n'
             <<"CALLE: "<<xCliente.xDireccion.sCalle<<'\n'
             <<"CIUDAD: "<<xCliente.xDireccion.sCiud<<'\n'
             <<"ESTADO: "<<xCliente.xDireccion.sEstado<<'\n'
             <<"CODIGO POSTAL: "<<xCliente.xDireccion.sCp<<"\n\n";

    xWeb_Info.sCorreo="haljunatruspidewolv@outlook.com";
    xWeb_Info.sFacebook="yeyeyeyye";
    xWeb_Info.sPagina="www.PAGINARANDOM.com";
    xWeb_Info.sTwitter="@JSAOOO";

    std::cout<<"CONTACTO DEL CLIENTE: "<<'\n'
             <<"EL CORREO ES EL SIGUIENTE: "<<xWeb_Info.sCorreo<<'\n'
             <<"EL FACEBOOK ES EL SIGUIENTE: "<<xWeb_Info.sFacebook<<'\n'
             <<"EL SITIO WEB ES LA SIGUIENTE: "<<xWeb_Info.sPagina<<'\n'
             <<"EL TWITTER ES EL SIGUIENTE: "<<xWeb_Info.sTwitter<<"\n\n";

    xLibro.sTit="PROGRAMACION EN C++";
    xLibro.sAut="DEITEL";
    xLibro.anio=2023;
    xLibro.sFecha="2023";
    xLibro.sISBN="286484";
    xLibro.xFechaCompra.dia=14;
    xLibro.xFechaCompra.mes=9;
    xLibro.xFechaCompra.anio=2023;        

    std::cout<<"DATOS DEL LIBRO COMPRADO POR EL CLIENTE: "
             <<"LIBRO: "<<xLibro.sTit<<'\n'
             <<"AUTOR: "<<xLibro.sAut<<'\n'
             <<"AÑO DE PUBLICACION: "<<xLibro.anio<<'\n'
             <<"FECHA: "<<xLibro.sFecha<<'\n'
             <<"FECHA DE COMPRA: "<<xLibro.xFechaCompra.dia<<" "
             <<xLibro.xFechaCompra.mes<<" "<<xLibro.xFechaCompra.anio<<"\n\n";
    
    xEditorial.iIde=1;
    xEditorial.sNom="EL PLANETA";
    xEditorial.xDireccion.sCalle="AV NAUCALPAN  CONSTITUYENTES";
    xEditorial.xDireccion.sCiudad="GUADALAJARA";
    xEditorial.xDireccion.sEstado="JALISCO";
    xEditorial.xDireccion.sNumero="#78-A";
    xEditorial.xDireccion.sCp="55454";
    xEditorial.xWebInfo.sPagina="www.Editorial-el-planeta.com";
    xEditorial.xWebInfo.sCorreo="nsdnadsa@gmail.com";
    xEditorial.xWebInfo.sFacebook="EDITPLANETA";
    xEditorial.xWebInfo.sTwitter="@PLANETA";

    std::cout<<"EL NOMBRE DE LA EIDTORIAL ES: "<<xEditorial.sNom<<'\n'
             <<"LA DIRECCION ES: "<<xEditorial.xDireccion.sCalle<<'\n'
             <<"LA CIUDAD ES: "<<xEditorial.xDireccion.sCiudad<<'\n'
             <<"EL ESTADO ES: "<<xEditorial.xDireccion.sEstado<<'\n'
             <<"EL NUMERO DE EDIFICIO ES: "<<xEditorial.xDireccion.sNumero<<'\n'
             <<"EL CODIGO POSTAL ES: "<<xEditorial.xDireccion.sCp<<'\n'
             <<"LA PAGINA DE LA EDITORIAL ES: "<<xEditorial.xWebInfo.sPagina<<'\n'
             <<"EL CORREO DE LA EDITORIAL ES: "<<xEditorial.xWebInfo.sCorreo<<'\n'
             <<"EL FACEBOOK DE LA EDITORIAL ES: "<<xEditorial.xWebInfo.sFacebook<<'\n'
             <<"EL TWITTER DE LA EDITORIAL ES: "<<xEditorial.xWebInfo.sTwitter<<"\n\n";
    
    /*NOTA ´PODEMOS ASIGNAR LOS MISMOS 
    VALORES A OTRO CLIENTE POR EJEMPLO CON ESTA ASIGNACION*/
    xCliente2=xCliente;

    /* xCliente2.sNomb="JULIO";
    xCliente2.xDireccion.sCalle="NAUCALPAN";
    xCliente2.xDireccion.sCiud="MARAMOROS";
    xCliente2.xDireccion.sEstado="MICHOACAN";
    xCliente2.xDireccion.sNum="#59-A";
    xCliente2.xDireccion.sCp="1845";*/

    std::cout<<"DATOS DEL CLIENTE: "<<'\n'
             <<"NOMBRE: "<<xCliente2.sNomb<<'\n'
             <<"CALLE: "<<xCliente2.xDireccion.sCalle<<'\n'
             <<"CIUDAD: "<<xCliente2.xDireccion.sCiud<<'\n'
             <<"ESTADO: "<<xCliente2.xDireccion.sEstado<<'\n'
             <<"CODIGO POSTAL: "<<xCliente2.xDireccion.sCp<<"\n\n";

    return 0;
}