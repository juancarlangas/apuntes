//EJERCICIO DE ARRAYS
#include<iostream>
using namespace std;

int main(){
    const int rango{5};
    int array[rango]{1,2,3,4,5};

    cout<<"ESTE ES EL VALOR 0"<<endl;
    cout<<array[0];
    cout<<"INTRODUZCA EL VALOR A CAMBIAR: ";
    cin>>array[0];
    cout<<"ESTE ES EL NUEVO VALOR DE 0:"<<array[0];
    return 0;
}