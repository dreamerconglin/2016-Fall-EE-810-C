#include <iostream>

using namespace std;

int main()
{
    int n=100,sum1=0,sum2=0;

    sum1=n*(n+1)/2;
    cout<<"the answer using the Gauss formula n(n+1)/2 is "<<sum1<<endl;

    while(n>0){
        sum2+=n;
        n--;
    }
    cout<<"the answer using a loop is "<<sum2<<endl;

    if(sum1==sum2)
        cout<<"the both answers are the same"<<endl;
    else
        cout<<"the answers are different"<<endl;

    return 0;
}
