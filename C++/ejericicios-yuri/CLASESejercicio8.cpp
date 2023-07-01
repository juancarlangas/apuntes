/*EN ESTE CODIGO ILUSTRAREMOS EL USO DE CLASES EN C++*/
#include<iostream>
using namespace std;

struct stctest{
    int dato;
    string sdato;    

};

class Test{
    public:

           
            //Funcion retorna el doble de la variable
            int FunIntDoubleInteger(){
                return xinteger*2;
            }

            //Funcion Miembro String
            void FunDespliegString(){
                cout<<xString<<endl;
            }

            //private: 
            int xinteger{10};
             int xArreglo[3]={1,2,3};
            struct stctest xStruct={20,"sDato"};//Pasamos datos al struct
            string xString{"String"};
};

int main(){
    Test xObjeto1,xObjeto2;

    cout<<"Curso de c++"<<"\n";
    cout<<"Definicion de clases"<<endl;

    //Accedemos a lo dastos miebros de la clase
    cout<<xObjeto1.FunIntDoubleInteger()<<endl;
    cout<<"Esta es la Funcion Despliega void:"<<endl;//La ponemos aparte por que es una funcion void
    xObjeto1.FunDespliegString();

    cout<<"STRUCT STRING:"<<xObjeto1.xStruct.sdato<<"\n";
    cout<<"STRUCT INT:"<<xObjeto1.xStruct.dato<<"\n";
    cout<<"xARREGLO:"<<xObjeto1.xArreglo[2];
    
    
    cout<<"ESTO SON LOS ELEMENTOS DEL OBJETO 2"<<endl;

        xObjeto2.xinteger=20;
        xObjeto2.xStruct={70,"HOLA"};
        xObjeto2.xString={"QUE ONDA!"};
        xObjeto2.xStruct.dato=800;
        

    //Accedemos a lo dastos miebros de la clase
    cout<<xObjeto2.FunIntDoubleInteger()<<endl;
    cout<<"Esta es la Funcion Despliega void:"<<endl;//La ponemos aparte por que es una funcion void
    xObjeto2.FunDespliegString();

    cout<<"STRUCT STRING:"<<xObjeto2.xStruct.sdato<<"\n";
    cout<<"STRUCT INT:"<<xObjeto2.xStruct.dato<<"\n";
    cout<<"xARREGLO:"<<xObjeto2.xArreglo[2];
    return 0;
}