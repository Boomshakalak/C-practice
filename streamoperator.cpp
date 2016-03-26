#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(double r=0,double i=0):real(r),imag(i){}
    Complex operator+(Complex &c);
    friend ostream& operator<<(ostream&,Complex&);
private:
    double real;
    double imag;
};
Complex Complex::operator+(Complex &c)
{
    return Complex(real+c.real,imag+c.imag);
}
ostream &operator<<(ostream& output,Complex &c)
{
    output<<c.real<<"+"<<c.imag<<"i";
    return output;
}
int main()
{
    Complex c1(2,4),c2(6,10),c3;
    c3=c1+c2;
    cout<<c1<<"+"<<c2<<"="<<c3<<endl;
    return 0;
}