/*EN ESTE EJERCICIO MOSTRAREMOS RECURSIVIDAD*/
#include<iostream>
using namespace std;

int factorial(int numFactorial);
int main(){
    int numero;

    cout<<"POR FAVOR INGRESE EL NUMERO QUE QUIERES EL FACTORIAL";
    cin>>numero;

    factorial(numero);
    cout<<"ESTE ES EL RESULTADO"<<" "<<factorial(numero);
    return 0;
}

int factorial(int numFactorial){
    int resultado=0;
    
    if(numFactorial==0||numFactorial==1){
        resultado=1;
    }
    else{
        resultado= numFactorial * factorial(numFactorial - 1);
    }
    return resultado;
}