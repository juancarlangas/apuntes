
#include<iostream>
struct Perro {
  std::string apodo;
};

int32_t main()
{
   Perro perro{"pendejo"}; 
   Perro *perro_ptr {&perro} ;

  std::cout << perro.apodo << '\n' ;
  //std::cout<< perro_ptr->apodo << std::endl;
  
}