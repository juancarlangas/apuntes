#include<iostream>
#include<cstring>




int main(){

    char nombre[12];

// Usando getLine.
std::cout << "Ingrese name: ";
std::cin.getline(nombre, 12);
std::cout<<(int)strlen(nombre);
//std::cout<<nombre.size();

    return 0;
}