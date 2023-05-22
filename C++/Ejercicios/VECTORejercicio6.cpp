#include<iostream>
#include<vector>
#include<iomanip>

using std::vector;
using std::cout;
using std::setw;


int main(void)
{
    
    vector<int>Vector_Notas{1,2,3,4,5,6,7,8,9,10}; //CANTIDAD ASTERISCOS

    for(size_t i = 0; i < Vector_Notas.size(); ++ i)
    {
        if(i == 0){
            cout<<'0'<< setw(3)<< '-'<< setw(3)<<'9';
        }else if(i == 9)
        {
            cout << setw(8) << "100";
        }else
        cout<< i * 10 << setw(3)<<" - " << setw(3)
            <<(i * 10 ) + 9;

        for ( int j = 0; j < Vector_Notas.at(i);++j)
        {
        cout<<'*';

        }
        cout<<'\n';
    }


}