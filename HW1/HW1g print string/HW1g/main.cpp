#include <iostream>
#include <string>
using namespace std;

string my_string(int n)
{
    string number;
    while(n>0)
    {
        char x=n%10+'0';
        number=x+number;
        n=n/10;
    }
    return number;
}

int main()
{
    int n;
    cout<<"Enter in number n: ";
    cin>>n;

    cout<<"to_string function: "<<to_string(n)<<endl;//use to_string function, defined in header <string>

    cout<<"my_string function: "<<my_string(n)<<endl;//ues my_string function

    return 0;
}
