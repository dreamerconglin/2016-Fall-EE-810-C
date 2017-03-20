#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    while(n>1){
        if(n%2==1){
            n=3*n+1;
            cout<<n<<endl;
        }
        else{
            n=n/2;
            cout<<n<<endl;
        }
    }

    return 0;
}
