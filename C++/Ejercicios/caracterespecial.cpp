#include<iostream>

int main(){

    //char8_t ch= L'ñ';
    char8_t letra;
    int iletra;
    

    std::cout<<"DAME LA LETRA ESPECIAL";
        
    std::cin>>letra;
    iletra=int(letra);
    if(iletra==241){
        std::cout<<"ES LA LETRA Ñ";
    }
    return 0;
}