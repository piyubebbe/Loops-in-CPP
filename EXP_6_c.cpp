//Piysush Pawar
//24070123145
//B3

#include <iostream>
using namespace std;

int main()
{
    for(int i = 0; i <= 10; i++)
    {
        if (i % 2 == 0) //prints only odd numbers
            continue;
        else
            cout << i << "\n";
    }
    return 0;
}