/*EN ESTE EJERCICIO OBSERVAMOS  LA VARIABLE TIPO REFERENCIA

una variable tipo referencia, es una alias de otra variable, es decir,
que podemos acceder a la informacion de la variable desde esa referencia.

Al ser un alias de una variable, nos permitira acceder a la misma informacion
de la variable  a la que esta referenciada.

Cuando una variable  referenciada es definida, de inmediato debe inicializarse
referenciadola a una variable

Alguien puede comentar que, una variable referencia es como un apuntador; ya
que en cierta forma maneja una direccion de memoria de otra variable, por lo que
se indica las diferencias al respecto entre un Apuntador y una Referencia:

 1.-No es posible tener referencias a NULL, por ese motivo debe de ser referenciada de inmediato.
 2.-Una vez que una referencia es asociada a una variable, esta referencia no puede cambiarse,
    tal y como sucede con los apuntadores que si es posible cambiar la direccion que contienen
    para apuntar a otra variable distinta
3.-Una referencia DEBE ser inicializada al ser creada o definida. Un apuntador puede ser
    inicializado en cualquier momento.

Tomando en cuanta lo anterior podemos decir que una referencia es simplemente una 
variable PUNTADOR CONSTANTE, es decir, que al definirla hay que darle un valor y
que este valor no puede ser cambiado durante la ejecucion del programa.

 Para definir una referencia  se utiliza un & tal y como se muestra en el siguiente
 ejemplo:

 int variablex;
 int& variabley{variablex};
*/

#include<iostream>

int main(){

    int ivariablex{1},ivariabley{100};
    int& iVaraibleRef{ivariablex};

    std::cout<<"El valor de la varible entera x: "<<ivariablex<<'\n'
             <<"El valor de la variable de referencia: "<<iVaraibleRef<<'\n'
             <<"El valor de la direccion de la variable entera: "<<&ivariablex<<'\n'
             <<"El valor de la direccion de la variable entera y: "<<&ivariabley<<'\n'
             <<"El valor de la direccion de la variable de la refencia: "<<&iVaraibleRef<<"\n\n";
    
    //Intentamos cambiar la direccion 
    iVaraibleRef=ivariabley;
     std::cout<<"El valor de la varible entera x: "<<ivariablex<<'\n'
             <<"El valor de la referencia entera a x: "<<iVaraibleRef<<'\n'
             <<"El valor de la direccion de la variable entera x: "<<&ivariablex<<'\n'
             <<"El valor de la direccion de la variable entera y: "<<&ivariabley<<'\n'
             <<"El valor de la direccion de la variable de la refencia a y: "<<&iVaraibleRef<<'\n';

    return 0;
}