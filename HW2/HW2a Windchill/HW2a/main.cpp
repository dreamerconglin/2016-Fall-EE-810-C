#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int V=5,WindChill;

    while(V<=60){
        for(int T=40;T>=-45;T-=5){
            WindChill=round(35.74+0.6215*T-35.75*pow(V,0.16)+0.4275*T*pow(V,0.16));
            cout<<WindChill<<"  ";
        }
        cout<<endl;
        V+=5;
    }
}
