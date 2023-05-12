/*ESTAMOS CREANDO UN LOGIN CON OPCIONES DE CREAR OTRO Y ASI*/

#include<iostream>
#include <cstring>
#include<windows.h>
#define MAX_STRING 50
#define ENTER 13
#define BACK_SPACE 8
void registar(char *Registrar, char *Contraseña);
void ingresar( char *Contraseña);
int main(){
    char Usuario[20];
    char Contraseña[20];
    int iopcion;

    std::cout<<"********BIENVENIDO ESTE ES EL LOGIN********"
            <<"\nEL MENU ES EL SIGUIENTE:  "
            <<"\n  1.-REGISTRARSE"
            <<"\n  2.-INGRESAR"
            <<"\n  3.-SALIR"
            <<"\n\n\tINGRESE LA OPCION A REALIZAR: ";

    std::cin>>iopcion;
    std::cin.ignore();

        switch (iopcion)
        {
        case 1:
            std::cout << "USUARIO: ";
            fgets(Usuario,MAX_STRING,stdin);
            Usuario[ strlen( Usuario ) - 1 ] = '\0';
            std::cin.ignore();
            std::cout << "CONSTRASEÑA: ";
            ingresar(Contraseña);

            break;
        case 2:
            registar(Usuario,Contraseña);
            break;
        case 3:

            break;    
        default:
            break;
        }
    return 0;
}

void ingresar(char *Contraseña)
{   
        char cComparar;
        int iContador{0};
        
        
        while (cComparar = std::cin.get()){
            
            if(cComparar == ENTER)
            {
                Contraseña[ iContador ] ='\0';
                break;
            }else 
            if(cComparar==BACK_SPACE)
                 {if(iContador > 0)
                 {
                    -- iContador;
                    std::cout << "\b \b";  
                 } 
            }else{
                std::cout << "*";
                Contraseña[ iContador ] = cComparar;
                ++ iContador;
            }
        }


}

void registar(char *Registrar,char *Contraseña){

    std::cout << "INGRESE EL NOMBRE DE USUARIO: ";
    fgets( Registrar , MAX_STRING , stdin );
    Registrar[ strlen( Registrar ) - 1] = '\0';
    std::cin.ignore();
    std::cout << "INGRESE LA CONTRASEÑA: ";
    fgets(Contraseña, MAX_STRING, stdin);
    Contraseña[ strlen( Contraseña ) - 1 ] = '\0';


}