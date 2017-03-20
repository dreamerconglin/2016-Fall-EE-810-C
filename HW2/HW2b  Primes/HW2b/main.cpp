#include<iostream>
#include<cmath>
using namespace std;

bool isprime(unsigned long long p)//pay attention that 1 is not prime
{
    if(p>1){
        for(unsigned long i=2;i<=sqrt(p);i++)
            if(p%i==0) return false;
            return true;
    }
    else
        return false;
}
int main()
{
    int p;
    cout<<"Enter in a number: ";
    cin>>p;
    if(isprime(p))
        cout<<p<<" is prime"<<endl;
    else
        cout<<p<<" is not prime"<<endl;
    return 0;
}
