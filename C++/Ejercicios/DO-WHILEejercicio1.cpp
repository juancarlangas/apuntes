/*EN ESTE EJERCICIO IMPLEMENTAREMOS UN LOGIN VERSION 1*/

#include<iostream>
#include<string>
int main(){

    std::string USER{"ADMINISTRADOR"},PASSWORD{"CONTRASEÑA"};
    std::string PASSWORD2,USER2;
    short int intentos{3};
    bool esc{0};
    do{
        std::cout<<"HAZ ACCEDIDO A EL LOGIN DE WALLMART"<<std::endl;
        std::cout<<"USER: ";
        std::cin>>USER2;
        std::cout<<"CONTRASEÑA: ";
        std::cin>>PASSWORD2;
        if(USER2!=USER&&PASSWORD2!=PASSWORD){
        std::cout<<"USUARIO O CONTRASEÑA NO COICIDEN\n";
        std::cout<<"intentos"<<intentos;
        intentos--;}
        else {
        std::cout<<"BIENVENIDO";
        esc=1;}
    }while(intentos<3&&esc<1);

    return 0;
}