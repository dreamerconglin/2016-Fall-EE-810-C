#include <iostream>
#include<vector>
using namespace std;

//The fuction to compute the maximum value, the minimum value, the mean, and the variance
void function(float array[],int n,float &max,float &min,float &mean,float &variance)
{
    float sum=0,sum2=0;
    for(int i=0;i<n;i++)
    {
        if(array[i]>max)
            max=array[i];
        if(array[i]<min)
            min=array[i];
        sum+=array[i];
        sum2+=array[i]*array[i];
    }
    mean=sum/n;
    variance=sum2/n-sum/n*sum/n;//D(X)=E(X^2)-E(X)^2
}

int main()
{
    //Enter in the array
    int n;
    cout<<"Enter in number n: ";
    cin>>n;
    vector<float>   array(n);//declare the array as a dynamic array
    for(int i=0;i<n;i++)
    {
        cout<<"Enter in number array["<<i<<"]: ";
        cin>>array[i];
    }

    //Compute the array
    float max=array[0],min=array[0],mean,variance;
    function(&array[0],n,max,min,mean,variance);
    cout<<"The maximum value in the array is "<<max<<endl;
    cout<<"The minimum value in the array is "<<min<<endl;
    cout<<"The mean of the array is "<<mean<<endl;
    cout<<"The variance of the array is "<<variance<<endl;

    return 0;
}
