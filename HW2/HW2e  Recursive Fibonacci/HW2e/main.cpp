#include <iostream>
using namespace std;

int fibo(int n){
    if(n==0)
        return 0;//fibo(0)=0
    if(n==1)
        return 1;//fibo(1)=1
    return fibo(n-1)+fibo(n-2);//fibo(n)=fibo(n-1)+fibo(n-2)
}

int main()
{ 
    cout<<"fibo(10)= "<<fibo(10)<<endl;
    cout<<"fibo(20)= "<<fibo(20)<<endl;
    cout<<"fibo(30)= "<<fibo(30)<<endl;
    return 0;
}
