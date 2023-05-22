//SUMA DE DOS NUMEROS
#include<iostream>

int main(){
    int num1,num2,resultado;

    std::cout<<"BIENVENIDO A SUMAR DOS NUMEROS"<<std::endl;
    std::cout<<"POR FAVOR TECLEE EL PRIMER NUMERO: "<<std::endl;
    std::cin>>num1;
    std::cout<<"AHORA EL SEGUNDO NUMERO: "<<std::endl;
    std::cin>>num2;
    resultado=num1+num2;
    std::cout<<"ESTE ES EL RESULTADO: "<<resultado;

    return 0;
}