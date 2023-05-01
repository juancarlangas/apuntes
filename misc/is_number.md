```c++
#include <sstream>

bool es_numero( std::string &_Cadena ) noexcept
{
	// Creamos un strinstream basándonos en la cadena
	std::stringstream ss( _Cadena );

	double numero;

	// Si la cadena contiene algo que no sea número, se va a detener el flujo
	ss >> numero;

	// Si llega al fin del stream y no falló es porque la cadena completa FUE UN NÚMERO. 
	return ss.eof() and !ss.fail();
}
```
