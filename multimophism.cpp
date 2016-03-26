#include <bits/stdc++.h> 

using namespace std;

class Point
{
public:
    Point(float a=0,float b=0):x(a),y(b){}
    void setPoint(float,float);
    float getX() const{return x;}
    float getY() const{return y;}
    friend ostream & operator <<(ostream &,const Point &);
protected:
    float x;
    float y;
};
void Point::setPoint(float a,float b)
{
    x=a;y=b;
}
ostream & operator <<(ostream &output,const Point &p)
{
    output<<"["<<p.x<<","<<p.y<<"]"<<endl;
    return output;
}
class Circle:public Point
{
public:
    Circle(float a=0,float b=0,float r=0):Point(a,b),radius(r){};
    void setRadius(float);
    float getRadius() const;
    float area() const;
    friend ostream &operator<<(ostream &,const Circle &);
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
 ostream &operator<<(ostream &output,const Circle &c)
{
    output<<"Center=["<<c.x<<","<<c.y<<"]"<<"Radius="<<c.radius<<" area="<<c.area()<<endl;
    return output;
}
class Cylinder:public Circle
{
public:
    Cylinder(float a=0,float b=0,float r=0,float h=0):Circle(a,b,r),height(h){}
    void setHeight(float);
    float getHeight() const;
    float area() const;
    float volume() const;
    friend ostream & operator <<(ostream&,const Cylinder&);
protected:
    float height;
};
void Cylinder::setHeight(float h)
{
    height=h;

}
float Cylinder::getHeight() const
{
    return height;
}
float Cylinder::area() const
{
    return 2*Circle::area()+2*3.14159*radius*height;
}
float Cylinder::volume() const
{
    return Circle::area()*height;
}
ostream &operator <<(ostream &output,Cylinder &c)
{
    output<<"Center=["<<c.getX()<<","<<c.getY()<<"],r="<<c.getRadius()<<",h="<<c.getHeight()<<endl<<"area="<<c.area()<<",volume="<<c.volume()<<endl;
    return output;
}
int main()
{
   Cylinder c(3.5,6.4,5.2,10);
   cout<<"The orginal Cylinder:\n"<<c<<endl;
   c.setHeight(15);
   c.setRadius(7.5);
   c.setPoint(5,5);
   cout<<"New Cylinder:"<<endl;
   cout<<c;
   Point pRef=c;
   cout<<"pRef:"<<pRef<<endl;
   Circle cRef=c;
   cout<<"cRef:"<<cRef<<endl;

   return 0;
    

}