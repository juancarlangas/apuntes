//EJERCICIO DE REPASO :(

#include<iostream>

int main(){
    const float calidad_media=35.5,calidad_alta=55.3,iva=.21;
    int decision1=0,decision2=0;
    double result_media,result_alta,suma1,suma2,importe;

    std::cout<<"CUANTOS METROS QUIERES INSTALAR CON CALIDAD MEDIA?: ";
    std::cin>>decision1;
    std::cout<<"CUANTOS METROS QUIERES INSTALAR CON CALIDAD ALTA?: ";
    std::cin>>decision2;
    result_media=calidad_media*decision1;
    result_alta=calidad_alta*decision2;
    std::cout<<result_media<<std::endl;
    std::cout<<result_alta<<std::endl;
    suma1=result_media*iva;
    suma2=result_alta*iva;
    result_media+=suma1;
    result_alta+=suma2;
    importe=result_alta+result_media;
    std::cout<<"APLICANDO EL IVA LOS RESULTADOS SON LOS SIGUIENTES:"<<std::endl;
    std::cout<<"********************************"<<std::endl;
    std::cout<<"TOTAL DE MEDIA: "<<result_media<<std::endl;
    std::cout<<"TOTAL DE ALTA: "<<result_alta;
    std::cout<<"\nIMPORTE TOTAL:"<<importe;

    return 0;
}