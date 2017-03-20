#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    //Read in the array
    int r,c;
    cout<<"Enter in rows: ";
    cin>>r;
    cout<<"Enter in columns: ";
    cin>>c;
    vector<vector<double>   >   array(r,   vector<double>(c));//declare the array as a dynamic array
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"Enter in arr["<<i<<"]["<<j<<"]: ";
            cin>>array[i][j];
        }
    }

    //Calculate and print out the array
    for(int i=0;i<r;i++)
    {
        double sumr=0;
        for(int j=0;j<c;j++){
            cout<<setiosflags(ios::fixed)<<setprecision(1)<<left<<setw(10)<<array[i][j];//Use setprecision() and setw() to make the array look neat
            sumr+=array[i][j];//Calculate the sum of each row
        }
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<left<<setw(10)<<sumr<<endl;
    }

    double sum=0;
    for(int j=0;j<c;j++)
    {
        double sumc=0;
        for(int i=0;i<r;i++){
            sumc+=array[i][j];//Calculate the sum of each column
            sum+=array[i][j];//Calculate the sum of whole array
        }
        cout<<setiosflags(ios::fixed)<<setprecision(1)<<left<<setw(10)<<sumc;
    }
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<left<<setw(10)<<sum;
    return 0;
}
