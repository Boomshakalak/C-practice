#include <bits/stdc++.h> 

using namespace std;
class Shape
{
public:
    virtual float area() const {return 0;}
    virtual float volume() const {return 0;}
    virtual void shapeName() const=0;
};
class Point:public Shape
{
public:
    Point(float a=0,float b=0):x(a),y(b){};
    void setPoint(float,float);
    float getX()const{return x;}
    float getY()const{return y;}
    virtual void shapeName() const
    {
        cout<<"Point:";
    }
    friend ostream & operator << (ostream&,const Point &);
protected:
    float x,y;
};
void Point::setPoint(float a,float b)
{
    x=a;
    y=b;
}
ostream & operator <<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]";
    return output;
}
class Circle:public Point
{
public:
    Circle(float a=0,float b=0,float r=0):Point(a,b),radius(r){};
    void setRadius(float);
    float getRadius() const;
    float area() const;
    virtual void shapeName() const{cout<<"Circle:";}
    friend ostream &operator << (ostream&,const Circle &);
protected:
    float radius;

    
};
void Circle::setRadius(float r)
{
    radius=r;
}
float Circle::getRadius() const
{
    return radius;
}
float Circle::area() const
{
    return 3.14159*radius*radius;
}
ostream &operator << (ostream & output,const Circle &c)
{
    output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius;
    return output;
}
class Cylinder:public Circle
{
public:
    Cylinder(float a=0,float b=0,float r=0,float h=0):Circle(a,b,r),height(h){}
    void  setHeight(float h){height=h;}
    virtual float area() const{ return 2*Circle::area()+2*3.14159*radius*height;}
    virtual float volume() const {return Circle::area()*height;}
    virtual void shapeName() const {cout<<"Cylinder:";}
    friend ostream & operator << (ostream &, Cylinder &);
protected:
    float height;
    
};
ostream &operator <<(ostream& output,Cylinder& c)
{
    output<<"["<<c.x<<","<<c.y<<"],r="<<c.radius<<",h="<<c.height;
    return output;
}
int main()
{
    Cylinder cy(3.5,6.4,5.2,10.5);
    Point p(3.2,4.5);
    Circle c(2.4,1.2,5.6);
    p.shapeName();
    cout<<p<<endl;
    c.shapeName();
    cout<<c<<endl;
    cy.shapeName();
    cout<<cy<<endl<<endl;
    Shape *pt;
    pt=&cy;
    pt->shapeName();
    cout<<pt->volume();



}