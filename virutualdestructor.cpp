#include <bits/stdc++.h> 
using namespace std;
class Point
{
public:
    Point(){};
    virtual ~Point() //vitual here can help releasing space of a son class by activating the destructor of the son class using a single pointer
{
        cout<<"excuting Point destructor!"<<endl;}
};
class Circle:public Point
{
    public:
        Circle(){}
        ~Circle()
        {
            cout<<"excuting Circle destructor!"<<endl;
        }
    private:
        float radius;
};
using namespace std;
int main()
{
    Point *p= new Circle;
    delete p;
    return 0;

}