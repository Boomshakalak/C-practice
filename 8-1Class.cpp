#include <bits/stdc++.h> 

using namespace std;
class Time
{
public:
    void set_time();
    void show_time();
private:
    int hour;
    int minute;
    int sec;

};
int main()
{Time t1;
    t1.set_time();
    t1.show_time();
    return 0;
    

}
void Time::set_time()
{
    cin>>hour>>minute>>sec;
    h
}
void Time::show_time()
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}