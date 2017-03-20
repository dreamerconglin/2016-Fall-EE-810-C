#include <iostream>

using namespace std;

int main()
{
    int n;
    long long N=1;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>0){
        N*=n;
        n--;
    }
    cout<<"The factorial of this number is: "<<N<<endl;

    return 0;
}
//n=10, n!=3628800
//n=20, n!=2432902008176640000
//n=30, n! is overload
