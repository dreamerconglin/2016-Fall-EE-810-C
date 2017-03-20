#include<iostream>
#include<cmath>
using namespace std;

bool isprime(unsigned long long p)
{
    if(p>1){
        for(unsigned long i=2;i<=sqrt(p);i++)
            if(p%i==0) return false;
            return true;
    }
    else
        return false;
}

int countPrimes(unsigned long long a, unsigned long long b){
    int n=0;
    for(;a<=b;a++){
        if(isprime(a))
            n++;
    }
    return n;
}

int main()
{
    int a,b,n;
    cout<<"Enter in number a: ";
    cin>>a;
    cout<<"Enter in number b: ";
    cin>>b;
    n=countPrimes(a,b);
    cout<<"The number of primes in ["<<a<<","<<b<<"] is "<<n<<endl;
    return 0;
}
