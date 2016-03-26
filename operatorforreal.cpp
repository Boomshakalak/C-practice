#include <bits/stdc++.h> 

using namespace std;
class Complex
{
public:
    Complex(double r=0,double i=0):real(r),image(i)
    {}
  Complex operator + (Complex &c);
    friend Complex operator+(double a, Complex &b);

    void display();
private:
    double real;
    double image;

};
Complex Complex::operator+(Complex &c)
{
    return Complex(real+c.real,image+c.image);
}
Complex operator + (double a,Complex &b)
{
    return Complex(a+b.real,b.image);
}
void Complex::display()
{
    cout<<real<<"+"<<image<<"i"<<endl;
}
int main()
{
    Complex c1(3,4),c2(5,-10),c3;

    c3=c1+c2;
    cout<<"c1+c2=";
    c3.display();
    

}