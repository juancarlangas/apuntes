/*EJERCICIO CON FOR LOOP*/
#include<iostream>

int main(){
    const int capacidad{2};
    double vec[capacidad][capacidad];

    for(int j=0;j<capacidad;++j){
        for(int i=0;i<capacidad;++i){
        std::cout<<"introduzca el valor asignado que quieras";
        std::cin>>vec[j][i];
        }
    }


    for(int j=0;j<capacidad;++j){
        for(int i=0;i<capacidad;++i){
        std::cout<<vec[j][i]<<" ";
        }
    std::cout<<"\n";
    }

    return 0;
}