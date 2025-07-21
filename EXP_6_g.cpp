//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    for(int i = 1; i < 5; i++)
    {
        for(int j = 5; j > i; j--)
            cout << " ";
           
        for(int k = 0; k < i; k++)
            cout << "*";
           
        for(int l = 0; l < i-1; l++)
            cout << "*";
        cout << "\n";
    }
}