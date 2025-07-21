//Piyush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    int p = 1;
    for(int i = 1; i < 5; i++)
    {
        for(int j = 0; j < i; j++,p++)
            cout << p;
        cout << "\n";
    }
}