/*HERENCIA MULTIPLE PARTE 2

Clase padre:
Persona Carrera Area

Clase hija:
    Estudiantes: Personas, Carrera
    Empleado: Personas, Areas*/

#include<iostream>

using std::cout;
using std::string;

class Personas{
    public:

        void set_Nombre(string pNombre){
            sNombre=pNombre;
        }      

        void set_Apellido(string pApellido){
            sApellido=pApellido;
        }  

        void set_Genero(string pGenero){
            sGenero=pGenero;
        }

        void set_Edad(int pEdad){
            iEdad=pEdad;
        }

        void set_Peso(float pPeso){
            fPeso=pPeso;
        }

        void set_Estatura(float pEstatura){
            fEstatura=pEstatura;
        }

        string get_Nombre(){
            return sNombre;
        }

        string get_Apellido(){
            return sApellido;
        }

        string get_Genero(){
            return sGenero;
        }

        int get_Edad(){
            return iEdad;
        }

        float get_Peso(){
            return fPeso;
        }

        float get_Estatura(){
            return fEstatura;
        }

        void get_Persona_info();

    private:
        string sNombre;
        string sApellido;
        string sGenero;
        int iEdad;
        float fPeso;
        float fEstatura;

};

void Personas::get_Persona_info(){
    cout<<"EL NOMBRE ES: "<<get_Nombre()<<'\n'
        <<"EL APELLIDO ES: "<<get_Apellido()<<'\n'
        <<"EL GENERO ES: "<<get_Genero()<<'\n'
        <<"LA EDAD ES: "<<iEdad<<'\n'
        <<"EL PESO ES: "<<fPeso<<'\n'
        <<"LA ESTATURA ES: "<<fEstatura<<'\n';
}

class Carreras{

       public: 
            void set_Carrera(string pCarrera){
                sCarrera=pCarrera;
            }

            string get_Carrera(){
                return sCarrera;
            }
    private:
        string sCarrera;
       
};

class Areas{
    public:
        void set_Area(string pArea){
            sArea=pArea;
        }

        string get_Area(){
            return sArea;
        }
    private:
        string sArea;
};

class Estudiantes : public Personas, public Carreras{

    public:

        void set_Semestre(int pSemestre){
            iSemetre=pSemestre;
        }
        void set_Turno(string pTurno){
            sTurno=pTurno;
        }

        int get_Semestre(){
            return iSemetre;
        }

        string get_Turno(){
            return sTurno; 
        }

        void get_Estudiante_info();

    private: 
        int iSemetre;
        string sTurno;


};

void Estudiantes::get_Estudiante_info(){
    get_Persona_info();
    cout<<"ESTE ES EL SEMESTRE: "<<get_Semestre()<<'\n'
        <<"ESTE ES EL TURNO: "<<get_Turno()<<'\n';
}

class Empleados: public Personas, public Areas{
    public:
        

        void set_Horas_Totales();

    private:
        int iHoras_Totales; //considerando extra paga
        int iHoras_Extra;
        float fSueldo_Base{100};
        float fSueldo_Total;//Se calculara el sueldo en el int
        float fSueldo_Extra{200};
        int iHora_Entrada;   
        int iHora_Salida;
        int iHoras_Base{0};
        int iHoras_Extra;
        int iopcion;
        const int iSalida_Maxima{24};
        const int iHoras_Obligatorias{8};
        const int iMax_Horas_Permitidas{15};
};

void Empleados::set_Horas_Totales(){
    uint32_t opcion;

    do {
	std::cout << "HORA DE ENTRADA: ";
	std::cin >> iHoras_Totales;
	std::cout << "HORA DE SALIDA: ";
	std::cin >> iHora_Salida;

	iHoras_Totales = iHora_Salida - iHora_Entrada;

	/* El trabajador debe salir antes de la SALIDA_MAXIMA y además sus horas de trabajo
	* deben ser entre 0 y MAX_HORAS_PERMITIDAS */
	    if ( ( 0 < iHoras_Totales ) and ( iHoras_Totales <= iMax_Horas_Permitidas )
	        and ( iHora_Salida <= iSalida_Maxima ) ) {

	            // Si trabajó horas extras
	            if ( iHoras_Totales > iHoras_Obligatorias ) {
		            iHoras_Base = iHoras_Obligatorias;
		            iHoras_Extra = iHoras_Totales - iHoras_Obligatorias;
	            }
	            else
		        iHoras_Base = iHoras_Totales;

	            fSueldo_Total = iHoras_Base * fSueldo_Base + iHoras_Extra * fSueldo_Extra;
            
            get_Persona_info();
	        std::cout<<"HORAS TOTALES: " << iHoras_Totales << '\n';//DESPLEGAMOS HORAS
	        std::cout << "AQUI ESTA EL MONTO A PAGAR:" << fSueldo_Total;//DESPLEGAMOS MONTO
		    opcion = 2;
	    }
	    else
	    {
	    std::cout << "DATO INVALIDO, INTENTE DE NUEVO=[1] SALIR[2]";
	    std::cin >> opcion;	
	    }

    } while( opcion == 1 ); // EL BUCLE SE IMPLEMENTARA SIEMPRE Y CUANDO 
			    // EL USUARIO ASI LO DESEE

    std::cout << std::endl;
}



int main(){

    Estudiantes xEstudiante,xTrabajador;

    xEstudiante.set_Nombre("JULIO");
    xEstudiante.set_Apellido("CLASIFICADO");
    xEstudiante.set_Genero("MASCULINO");
    xEstudiante.set_Edad(10);
    xEstudiante.set_Peso(80.2);
    xEstudiante.set_Estatura(1.75);
    xEstudiante.set_Carrera("PROGRAMACION");
    xEstudiante.set_Semestre(6);
    xEstudiante.set_Turno("MATUTINO");
    

    //DESPLIEGO INFORMACION
    cout<<"INFORMACION PERSONAL DEL ESTUDIANTE:\n ";
            xEstudiante.get_Persona_info();

    cout<<"\nINFORMACION COMPLETA DEL ESTUDIANTE: \n";
            xEstudiante.get_Estudiante_info();


    //INFORMACION TRABAJADOR
    xTrabajador.set_Nombre("ERNESTO");
    xTrabajador.set_Apellido("MONTEMAYOR");
    xTrabajador.set_Genero("MASCULINO");
    xTrabajador.set_Edad(40);
    xTrabajador.set_Peso(87.2);
    xTrabajador.set_Estatura(2.01);
    xTrabajador.set_HoraIngreso(11);
    xTrabajador.set_HoraSalida();
    xTrabajador.set_sueldo()
   
    return 0;
}