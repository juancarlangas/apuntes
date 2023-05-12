/*EJERCICIO VERCTORES*/
/*VECTOR ES UNA CLASE DE LA LIBRERIA ESTANDAS C++. ESTA CLASE CREA
ESTRUCTURAS PARA ALMACENAR DATOS SECUENCIALES
*LOS VECTORES PUEDEN CRECER O DECRECER EN TAMAÑO DE FORMA DINAMICA
*TIENEN UNA SINTAXIS MUY SIMILAR A LOS ARRAY
*PROPORCIONAN MULTIPLES METODOS PARA CHEQUEAR LIMITES,TAMANO,
COMPROBAR SI EXISTE UN ELEMENTO, ETC
ALMACENAN LOS VALORES EN POSICIONES CONTIGUAS DE LA MEMORIA Y TAMBIEN 
EN POSICIONES SEPARADAS ACCESIBLES A TRAVES DE PUNTEROS*/ 

/*EL UTLIMO ELEMENTO TIENE INDICE size - 1 Y POR DEFECTO ALMACENARA 0*/

#include<iostream>
#include<vector>

using std::vector;
using std::cout;

int main(void){
    //vector<int>records(5);
    vector<int>records {10,29,3,4,90}; //TIENE 5 POSICIONES CON 5 CEROS
    //vector<char>letras{'a','b','d','f'}; <--siempre se almacena en
    vector<char>letras(5);                 //comillas simples

    for(int i = 0;i < records.size(); i++)
    {
        cout<<records[i]<<'\n';
    }

}