/*SE PIDIO A VEINTE ESTUDIANTES QUE CALIFICARAN LA CALIDAD DE LA COMIDA
EN LA CAFETERIA ESTUDIANTIL, EN UNA ESCALA DE 1 AL 5, EN DONDE EL 1
SIGNIFICA "PESIMO" Y EL 5 "EXCELENTE. COLOQUE LAS 20 RESPUESTAS EN UN 
ARREGLO ENTERO Y DETERMINE LA FRECUENCIA DE CALIFICACION"*/

#include<iostream>
#include<vector>
#include<iomanip>

using std::cout;
using std::vector;
using std::setw;

int main(void)
{
    vector <int> respuestas_encuesta {1,2,4,3,5,4,2,2,3,4,1,2,5,5,5,1,2,3,3,5};
    vector <int> frecuencias_encuesta(6);

    
    for(size_t i = 0; i < respuestas_encuesta.size() ; ++i)
    {
       ++frecuencias_encuesta[respuestas_encuesta[i]];

    }
    cout<<"CALIFICACION"<<setw(17)<<"FRECUENCIA"<<'\n';
    
    for(size_t j = 1; j < frecuencias_encuesta.size(); ++j)
    {
        cout<<setw(6) << j << setw(17)
            <<frecuencias_encuesta[j] <<'\n';
    }
}
