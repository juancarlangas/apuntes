//ejercicio obteto string
#include<iostream>
#include<string>
using namespace std;

int main(){

    string s1{"happy"};
    string s2{"birthday"} ;
    string s3;
    //despliega cuanto tienen almacenados dentro
    cout<<"s1: \""<<s1<<"\";lenght: "<<s1.length()
        <<"\ns2: \""<<s2<<"\";lenght: "<<s2.length()
        <<"\ns3: \""<<s3<<"\";lenght: "<<s3.length();
    //agregamos un objeto booleano
    cout<<"\nCOMPARAMOS S1 CON S2:"<<
    boolalpha<<"\nS1<S2"<<(s1<s2)<<"\nS1>S2"<<(s1>s2);
    if (s3.empty())
    {
        cout<<"\ns3 esta vacio asignando valor de s1 a s3 :)";
        s3=s1+s2;
        cout<<"s3:"<<s3<<"\"";
    }
    return 0;
}