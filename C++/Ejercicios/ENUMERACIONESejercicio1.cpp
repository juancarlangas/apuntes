/*ES UN CONJUNTO DE ENUMERACIONES ENTERAS REPERESENTADAS CON
IDENTIFICADORES. ESTAS CONSTANTES DE ENUMERACION, SOSN SIMBOLICAS
CUYOS VALORES SON DEFINIDOS AUTOMATICAMENTE. LOS VALORES enum
SE INICIAN CON 0, A MENOS QUE SE DEFINAN DE OTRA MANERA, Y 
SE INCREMENTAN EN 1 POR EJEMPLO LA ENUMERACION.

    enum meses {ene =  1 , febr... ,dec}
    
crea un nuevo tipo de enum llamado meses, dado al primer valor
se inicializa en 1 los otros se incrementan en 1*/

#include <iostream>
using std::cout;

int main(void)
{
    enum months {ENE = 1 , FEB, MAR , ABR , MAY , JUN , JUL , AGO, 
                SEPT, OCT, NOV , DIC};


    int month;
    std::string month_name [] = {"", "ENERO", "FEBRERO ", "MARZO" ,"ABRIL" , "MAYO" , "JUNIO"
                        ,"JULIO" , "AGOSTO" , "SEPTIEMBRE", "OCTUBRE"
                        ,"NOVIEMBRE" , "DICIEMBRE"};


    for (month = ENE ; month <= DIC ; ++month )
        {
            cout << month <<month_name [ month] << std::endl;
        } 

}