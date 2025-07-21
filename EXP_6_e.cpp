//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i < 5; i++)
    {
        for(int j = 5; j > i; j--)
            cout << "*";
        cout << "\n";
    }
}