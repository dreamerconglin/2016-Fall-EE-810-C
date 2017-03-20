#include <iostream>
using namespace std;

class GrowArray{
private:
    int* num;
    size_t size;
public:
    GrowArray():size(0){
        num = nullptr;
    }
    ~GrowArray(){delete [] num;}

    friend ostream& operator <<(ostream& s, const GrowArray& arr){
        if(arr.size==0 && arr.num==nullptr){
            s<<"NULL";
        }
        else if(arr.size!=0 && arr.num!=nullptr){
            for(int i=0;i<arr.size;++i){
                s<<arr.num[i]<<" ";
            }
        }
        return s;
    }

    GrowArray& operator =(const GrowArray& arr){
        delete [] num;
        size=arr.size;
        num=new int[size];
        for(int i=0;i<size;++i){
            num[i]=arr.num[i];
        }
        return *this;
    }

    void add(int new_number){
        if(size==0){
            ++size;
            num=new int[size];
            num[size-1]=new_number;
        }
        else if(size!=0){
            ++size;
            int* c=new int[size-1];
            for(int i=0;i<size-1;++i){
                c[i]=num[i];
            }
            delete [] num;
            num=new int[size];
            for(int i=0;i<size-1;++i){
                num[i]=c[i];
            }
            num[size-1]=new_number;
            delete [] c;
        }

    }
};

GrowArray f(GrowArray x){
    x.add(1);
    return x;
}

int main(){
    GrowArray a;
    for (int i=0; i<10; ++i)
        a.add(i);
    GrowArray b=a;
    cout << b << '\n';
    GrowArray c;
    c=a;
    cout << b << '\n';
    c=f(b);
    cout << c << '\n';
    return 0;
}
