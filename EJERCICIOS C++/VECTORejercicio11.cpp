#include<iostream>
#include<vector>
#include<iomanip>
#include<stdexcept>

void imprimir_vector(const std::vector <int> &);
void recibir_vector(std::vector <int> &);

int main(void)
{

    std::vector< int > enteros1(7);
    std::vector< int > enteros2(10);

        //imprime el tamanio y el contenido de enteros 1
    std::cout << "\nEL TAMANIO DEL VECTOR ES ENTEROS 1 ES: " <<enteros1.size()
              <<"\n EL VECTOR DESPUES DE LA INICIALIZACION: " << '\n';
    imprimir_vector(enteros1);

        //imprimir el tamanio y el contenido de enteros 2
    std::cout << "\nEL TAMANIO DEL VECTOR ENTEROS 2 ES: " <<enteros2.size()
              <<"\n EL VECTOR DESPUES DE LA INICIALIZACION: " << '\n';
    imprimir_vector(enteros2);

    enteros1={1,2,3,4,5,6,7};
    enteros2={8,9,10,11,12,13,14,15,16,17};

        //recibe e imprime enteros 1 y enteros 2
    std::cout << " \nIMPRIMA 17 ENTEROS \n";
    recibir_vector( enteros1 );
    recibir_vector( enteros2 );

    std::cout << "\n DESPUES DE LA ENTRADA, LOS VECTORES CONTIENEN: \n"
              << "ENTEROS 1: " <<'\n';
    imprimir_vector( enteros1 );
    std::cout << "\nENTEROS 2: " <<'\n';
    imprimir_vector( enteros2 );

        //usar el operador de desigualdad (!=) con objetos vector
    std::cout << "\nEVALUACION DE LOS VECTORES ENTEROS 1 Y ENTEROS 2" <<'\n';
    if ( enteros1 != enteros2)
        std::cout << "\nENTEROS1 Y ENTEROS2 NO SON IGUALES" << '\n';

        //crea el vector enteros3 usando enteros1 como un inicializador;
        //inicializador; imprime el tamanio del contenido
    std::vector< int > enteros3( enteros1 );
    
    std::cout << "\nEL TAMANIO DEL VECTOR ENTEROS 3 ES : " << enteros3.size()
              << "\n VECTOR DESPUES DE LA INICIALIZACION: " << '\n';
    imprimir_vector( enteros3 );

        //usa el operador de asignacion (=) sobrecargado
    std::cout << "\nASIGNACION DE ENTEROS 2 A ENTEROS 1 " << '\n';
              enteros1 = enteros2;
    
    std::cout << "\nENTEROS 1" << '\n';
    imprimir_vector(enteros1);
    std::cout << "\nENTEROS 2" << '\n';
    imprimir_vector(enteros2);

        //usa el operador de igualdad (==) con objeto vector
    std::cout << "\nEVALUACION: ENTEROS 1 == ENTEROS 2" <<'\n';
    if(enteros1 == enteros2)
        std::cout << "\nENTEROS 1 Y ENTEROS 2 SON IGUALES" << '\n';
    std::cout << "\n ENTEROS1 [5] ES: " <<enteros1[5];

    std::cout << "\n ASIGNACION DE 1000 A ENTEROS[5]" << '\n';
        enteros1[ 5 ] = 1000;
    std::cout << "\nENTEROS 1" << '\n';
    imprimir_vector( enteros1 );

        //intenta usar un subindice fuera de rango
    try
    {
        std::cout << "\nIntento de mostrar enteros1.at ( 15 )" << '\n';
        std::cout << enteros1.at(15);
    } 
    catch ( std::out_of_range &ex) //out_of_range es un tipo y como parametro la variable ex (objeto)
    {                        //contiene el codigo que maneja la excepcion en caso de que ocurra
        std::cerr << "\nOCURRIO UNA EXCEPCION" <<ex.what() << '\n';
    }                       //se llama a la funcion miembro what del objeto ex
                    //para que que se muestre el mennsaje  de error almacenado en el objeto
    std::cout << "\nEl tamanio actual de enteros3 es: " << enteros3.size() << std::endl;
    enteros3.push_back( 1000 ); // agrega 1000 al final del vector
    std::cout << "\nEl tamanio nuevo de enteros3 es: " << enteros3.size() << std::endl;
    std::cout << "\nAhora enteros3 contiene: ";
    imprimir_vector( enteros3 );

}
        //instruccion for basada en rango
void imprimir_vector(const std::vector <int> &_vect)
{
    for( int elemento : _vect)
        std::cout << elemento << ' ';

}

void recibir_vector( std::vector <int> &_vect)
{
    for (int elemento : _vect)
        std::cout << elemento <<' ';
}