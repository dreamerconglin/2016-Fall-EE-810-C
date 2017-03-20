#include <iostream>
#include<iomanip>

using namespace std;

int main()
{
   float n=1.0f,m=100.0f,sum1=0.0f,sum2=0.0f;//do as float

   while(n<101){
       sum1+=1/n;
       n++;
   }

   while(m>0){
       sum2+=1/m;
       m--;
   }
   cout<<"Do as float: 1/1+1/2+...1/100= "<<fixed<<setprecision(50)<<sum1<<endl;
   cout<<"Do as float: 1/100+1/99+...1/1= "<<sum2<<endl;
   cout<<sum1-sum2<<endl;

   double N=1.0,M=100.0,Sum1=0.0,Sum2=0.0;//do as double

   while(N<101){
       Sum1+=1/N;
       N++;
   }

   while(M>0){
       Sum2+=1/M;
       M--;
   }
   cout<<"Do as Double: 1/1+1/2+...1/100= "<<Sum1<<endl;
   cout<<"Do as Double: 1/100+1/99+...1/1= "<<Sum2<<endl;
   cout<<Sum1-Sum2<<endl;
}
