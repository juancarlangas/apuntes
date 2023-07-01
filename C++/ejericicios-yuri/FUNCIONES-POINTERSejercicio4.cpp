/*EN ESTE EJERCICIO HAREMOSUSO DE APUNTADORES PERO COMO PARAMETROS POR VALOR*/
#include<iostream>


void FnApuntador(int *apuntador){//indico que necesito que pase como parametro un apuntador
    int variable=10;

    std::cout<<"CONTENIDO DEL APUNTADOR DESDE LA FUNCION: "<<*apuntador<<std::endl;
    std::cout<<"VALOR DE LA DIRECCION DEL APUNTADOR DESDE LA FUNCION "<<apuntador<<std::endl;

    *apuntador=111; //modifico el contenido que apunta

    apuntador=&variable;//modifico la direccion para que tome la direccion de variable
            //Ya no contendra la direccion que hay por en el int main
            //sino que ahora ya tendra la direccion de variable (la que esta local)
            //y esto indica que la variable que esta en el int main no se vera modificada
            //estoy modificando el parametro por valor y no por referencia

    std::cout<<"CONTENIDO DEL APUNTADOR DESDE LA FUNCION !!!!:"<<*apuntador<<std::endl;
    std::cout<<"VALOR DE LA DIRECCION DEL APUNTADOR: "<<apuntador<<std::endl;

}
int main(){

    std::cout<<"CURSO DE C++\n";
    std::cout<<"APUNTADORES A APUNTADORES"<<std::endl;

    int variable=399;
    int *apuVariable=&variable;

    std::cout<<"VALOR DE LA VARIABLE ENTERA DESDE LA VARIABLE (int main): "<<variable<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE ENTERA DESDE EL APUNTADOR (int main): "<<*apuVariable<<std::endl;
    std::cout<<"VALOR DE LA DIRECCION DE LA VARIABLE APUNTADOR: "<<apuVariable<<std::endl;
    std::cout<<"\n";

    FnApuntador(apuVariable);

    std::cout<<"VALOR ENTERO DESDE LA VARIABLE ENTERA DESDE LA VARIABLE: (int main)"<<variable<<std::endl;
    std::cout<<"VALOR DE LA VARIABLE DESDE EL APUNTADOR: (int main)"<<*apuVariable<<std::endl;
    std::cout<<"VALOR DE LA DIRECCION DEL APUNTADOR: (int main)"<<apuVariable;
    return 0;
}