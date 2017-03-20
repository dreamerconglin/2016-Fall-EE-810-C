#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double r=1.0,θ;
    int n=10,m=3;

    while(n<=1000000){

        while(m<=n){
            θ=(2*3.1415926)/(2*m);//PI is approximately equal to 3.1415926
            r=r/cos(θ);
            m+=1;
        }

        cout<<"When n= "<<n<<", r= "<<r<<endl;
        n*=10;
    }

    return 0;
}
