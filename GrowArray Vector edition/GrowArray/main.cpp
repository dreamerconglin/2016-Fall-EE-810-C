#include <iostream>
#include <vector>
using namespace std;

class GrowArray{
private:
    vector<int> num;
public:
   void add(int new_number){
       num.push_back(new_number);
   }
   friend ostream& operator <<(ostream& s, const GrowArray& arr) {
       for(auto it=arr.num.begin();it!=arr.num.end();it++)
           s << *it;
       return s;
     }
};

GrowArray f(GrowArray x) {
  x.add(1);
  return x;
}

int main() {
  GrowArray a;
  for (int i = 0; i < 10; i++)
      a.add(i);
  GrowArray b = a;
  cout << b << '\n';
  GrowArray c;
  c = a;
  cout << b << '\n';
  c = f(b);
  cout << c << '\n';
}
