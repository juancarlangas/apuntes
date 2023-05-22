/*AQUI USAREMOS EL MEOTODO at() y push_back()*/
/*EL METODO at() nos permite poder acceder a un lugar especifico del vector
y el metodo push_back() insertar un elemento en la parte final*/
#include<iostream>
#include<vector>

using std::vector;
using std::cout;

int main(void)
{

    vector <int> records{9,10,19,8};

    cout<<records.at(3)<<'\n';

    records.at(3)=10;

    cout<<records.at(3)<<'\n';

    records.push_back(105);

    cout<<"PROBANDO EL METODO pushback "<<'\n'
        <<records.at(4);

}