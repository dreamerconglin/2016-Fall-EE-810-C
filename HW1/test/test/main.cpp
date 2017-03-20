#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n=0;
    float sum1=0.0f,sum2=0.0f;

    do{
        n++;
        sum1=sum2;
        sum2=0.0f;
        for(int i=1;i<=n;i++){
            sum2+=1.0f/(i*i);
        }

    }while(sum2-sum1!=0);
    cout<<n<<endl;//Figure out how many iterations you will need before the contribution of 1/n2 is too small and no longer matters.

    float j=1,m=1000*n,s1=0.0f,s2=0.0f;//make n bigger

    while(j<=m){
        s1+=1.0f/(j*j);
        j++;
    }

    while(m>0){
        s2+=1.0f/(m*m);
        m--;
    }

    cout<<sqrt(6*s1)<<endl;
    cout<<sqrt(6*s2)<<endl;//s2 is more accurate
}
