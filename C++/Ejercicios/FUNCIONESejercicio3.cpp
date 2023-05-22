/*EN ESTE EJERCICIO VEREMOS COMO UTILIZAR LAS REFERENCIAS COMO PARAMETROS,
Y SE VERA LA SIMILITUD QUE EXISTE CUANDO SE HA UTILIZADO EL PASO DE PARAMETROS
POR REFERENCIA*/

#include<iostream>

void FnParametros(int &iVar1,int &iVar2){
    short int sVariable;

    sVariable=iVar1;

    iVar1=iVar2;

    iVar2=sVariable;

}

int main(){
    int iVar1{111};
    int iVar2{222};
    int &rVar1=iVar1,&rVar2=iVar2;
    
    std::cout<<"EL VALOR DE iVar1 es: "<<iVar1<<'\n'
             <<"EL VALOR DE ivar2 es: "<<iVar2<<'\n'
             <<"EL VALOR DE rVar1 es: "<<rVar1<<'\n'
             <<"EL VALOR DE rVar2 es: "<<rVar2<<"\n\n";
      
    rVar1=555;
    rVar2=666;

    std::cout<<"EL VALOR DE iVar1 es: "<<iVar1<<'\n'
             <<"EL VALOR DE ivar2 es: "<<iVar2<<'\n'
             <<"EL VALOR DE rVar1 es: "<<rVar1<<'\n'
             <<"EL VALOR DE rVar2 es: "<<rVar2<<"\n\n";

    FnParametros(rVar1,rVar2);
    
    std::cout<<"EL VALOR DE iVar1 es: "<<iVar1<<'\n'
             <<"EL VALOR DE ivar2 es: "<<iVar2<<'\n'
             <<"EL VALOR DE rVar1 es: "<<rVar1<<'\n'
             <<"EL VALOR DE rVar2 es: "<<rVar2<<"\n\n";

    return 0;
}