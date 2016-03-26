#include <bits/stdc++.h> 

using namespace std;
class Time
{
public:
    Time(){minute=0,sec=0;}
    Time(int m,int n):minute(m),sec(n){}
    Time operator++();
    Time operator++(int);
    void display()
    {
        cout<<minute<<" : "<<sec<<endl;
    }
private:
    int minute;
    int sec;

};
Time Time::operator++()
{
    if(++sec>=60)
    {
        sec-=60;
        ++minute;
    }
    return *this;
}
Time Time::operator++(int)
{
    Time temp=*this;
    sec++;
    if(sec>=60)
    {
        sec-=60;
        ++minute;
    }
    return temp;
}
int main()
{
    Time t(34,0),t1;
   
        t1=++t;
        t.display();
        t1.display();
        t1=t++;
        t1.display();
        t.display();

     
    return 0;

}