#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    float a=1.0f,n,s1=0.0f,s2=0.0f;
    cin>>n;

    while(a<=n){
        s1+=1/(a*a);
        a++;
    }

    while(n>0){
        s2+=1/(n*n);
        n--;
    }

    cout<<sqrt(6*s1)<<endl;
    cout<<sqrt(6*s2)<<endl;//s2 is more accurate
    cout<<s1<<endl;
}
