#include <iostream>
#include <cmath>
#include <iomanip>
#define M_PI        3.14159265358979323846
using namespace std;

void location(double theta,double distance,double &x,double &y)//location function is to compute the (x,y)
{
    x=x+distance*sin(theta*M_PI/180);
    y=y+distance*cos(theta*M_PI/180);
}

int main()
{
    double x=0,y=0,theta,distance;
    cout<<"Enter in theta and distance: "<<endl;

    while(cin>>theta>>distance){
        if(theta>=0&&distance>=0)
        {
            location(theta,distance,x,y);
            cout<<"Location: x="<<setiosflags(ios::fixed)<<setprecision(4)<<x<<", y="<<y<<endl;
        }
        else{
            cout<<"Error!!!The value must be nonnegative!";
            break;//if theta or distance is negative, stop the loops
        }
    }

    return 0;
}
