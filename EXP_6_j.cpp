//Piyush Pawar
//24070123145
//B3

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass = "hi123";
    string in;
   
    cout << "Enter the password: ";
    cin >> in;

    if (in.size() == pass.size())
    {
        for (int i = 0; i < pass.size(); i++)
        {
            if (pass[i] != in[i])
            {
                cout << "The password is wrong";
            return 0;
            }
       
            else
            {
                cout << "The password is correct";
                return 0;
            }
        }
    }
    
    else
    {
        cout << "The password is wrong";
        return 0;
    }
}
