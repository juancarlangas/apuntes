#include<iostream>
#include<vector>
#include<string>
#include<iomanip>

using std::cout;
using std::vector;


int main(void)
{
    vector <vector<int>> vector1 =
    {
        { 1 , 3 , 5 },
        { 5 , 6 , 9 },
        { 6 , 4 , 7 }    
        
    };

    for ( int i = 0 ; i < 3 ; ++i)
    {

        for ( int j = 0 ; j < 3 ; ++j)
        {
            cout << vector1[ i ][ j ]<< " ";
        }
        cout<<'\n';
    }
}