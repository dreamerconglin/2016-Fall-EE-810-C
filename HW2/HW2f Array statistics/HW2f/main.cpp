#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    ifstream fin("2f.dat");//open the file
    int n,sum=0;
    fin>>n;//read in n

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        fin>>arr[i];//read in the array
        sum+=arr[i];
    }
    cout<<"The average is "<<sum/n<<endl;
    return 0;
}

