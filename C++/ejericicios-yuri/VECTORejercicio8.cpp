#include<iostream>
#include<vector>

/*LA INSTRUCCION FOR BASADA EN RANGO

    for(declaracionvariablerango: expresion)
            intruccion
            
en donde declaracionvariablerando es un contador, la expresion es el arrego
debe de ser consistente con el tipo de dato que se va
a iterar 

CUANDO SE DEBE E USAR?
CUANDO EL CODIGO NO REQUIERA EL USO DEL SUBINDICE DEL ELEMENTO
OSEA QUE NO NOS INTERESA SABER EN QUE POSICION, EN CASO CONTRARIO
SE DEBERA DE USAR UN FOR CONVENCIONAL CON SU CONTADOR*/

using std::cout;
using std::vector;

int main(void)
{
    vector <int> vector1 (2);

    vector1.push_back(45);
    vector1.push_back(35);

    //instruccion for basada en rango aqui la variable i toma el
    //valor de lo que se almacena en vector 1
    //y recorre todo el vector
    for(int i: vector1)
    cout<<i<<'\n';

}