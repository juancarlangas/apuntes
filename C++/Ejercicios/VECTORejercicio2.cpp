/*EN ESTE EJERCICIO SEGUIREMOS CON EL TEMA DE VECTORES REALIZANDO
UN PROGRMAA EN EL CUAL LE ASIGNAREMOS A 350 PERSONAS LA MISMA 
CANTIDAD DE DINERO*/

#include<iostream>
#include<vector>

using std::vector;
using std::cout;

int main(void)
{
    //AQUI LA SINTAXIS SE REFIERE A 35 PERSONAS ASIGNARLE 215.50 PESOS
    vector<double> salario_base(35 , 215.50);

    for(int i = 0; i < salario_base.size() ; ++i)
    {
        cout<<salario_base[i]<<'\n';
    }
}