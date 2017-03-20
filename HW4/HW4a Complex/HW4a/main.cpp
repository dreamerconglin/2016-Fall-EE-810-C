#include <iostream>
#include <cmath>
using namespace std;

class Complex{
private:
    double Re,Im;
public:
    Complex(double r=0,double i=0):Re(r),Im(i){}

    friend Complex operator +(Complex a,Complex b){
        Complex ans(a.Re+b.Re,a.Im+b.Im);
        return ans;
    }

    friend Complex operator *(Complex a,Complex b){
        Complex ans(a.Re*b.Re-a.Im*b.Im,a.Re*b.Im+a.Im*b.Re);
        return ans;
    }

    friend Complex operator -(Complex a){
        Complex ans(-a.Re,-a.Im);
        return ans;
    }

    friend double abs(Complex a){
        double magnitude=sqrt(a.Re*a.Re-a.Im*a.Im);
        return magnitude;
    }

    friend ostream& operator <<(ostream& s, Complex c){
        if(c.Im>=0)
            return s<<c.Re<<'+'<<c.Im<<'i';
        else
            return s<<c.Re<<c.Im<<'i';
    }
};

int main() {
    const Complex c1; // (0,0)  (0 + 0i)
    const Complex c2(2.5); // 2.5 + 0i
    const Complex c3(2.5, 1.8); //2.5 + 1.8i
    Complex c4 = c2 + c3; // 5.0 + 1.8i
    Complex c5 = c2 * c3; // https://en.wikipedia.org/wiki/Complex_number
    Complex c6 = -c5;
    double m = abs(c6); // magnitude of c6    sqrt of real^2 - imag^2

    cout << c3 << '\n'; // (2.5,1.8)
    cout << c4 << '\n';
    cout << c5 << '\n';
    cout << c6 << '\n';
    cout << m << '\n';
}
