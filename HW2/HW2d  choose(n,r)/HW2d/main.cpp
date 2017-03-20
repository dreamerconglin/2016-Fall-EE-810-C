#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n)//factorial function
{
    unsigned int N=1;
    for(unsigned int i=1;i<=n;i++)
        N*=i;
    return N;
}

double choose(unsigned int n, unsigned int r)//choose function
{
    double C;
    C=factorial(n)/(factorial(r)*factorial(n-r));
    return C;
}

int main()
{
    unsigned n,r;
    cout<<"Enter in number n: ";
    cin>>n;
    cout<<"Enter in number r: ";
    cin>>r;
    cout<<"The combination of ("<<n<<","<<r<<") is "<<choose(n,r)<<endl;
    return 0;
}
