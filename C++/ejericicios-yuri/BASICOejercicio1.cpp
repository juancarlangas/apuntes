/*USO DE NAMESPACE*/
#include<iostream>
using namespace std;
/*NOTA ES DE VITAL IMPORTANCIA ENTENDER ESTO:
PODEMOS BORRAR EL using namespace std;
pero al hacerlo todos los objetos que hace referencia se perderan
entonces para acceder a esos objetos necesitas especificar esa direccion
direccion::(objeto)<<nombrespace::varible<<std::objeto 
quedando finalmente:
std::cout<<edad1::edad<<std::endl;
std::cout<<
*/
namespace edad1{
int edad=10;
}

namespace edad2{
    int edad=12;
}
int main(){
    //Sintaxis es cout<<nombre de namespace :: variable;
    //Sintaxis objetc<<identificador namespace<<object

    cout<<edad1::edad<<endl;
    cout<<edad2::edad<<endl;
    return 0;
}