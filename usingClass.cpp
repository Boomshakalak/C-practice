#include <bits/stdc++.h> 

using namespace std;

class Box
{
public:
    Box(int h,int w,int l):height(h),width(w),length(l)
    {}
    int volume();
private:
    int height;
    int width;
    int length;

};

int Box::volume()
{
    return (height*width*length);
}
int main()
{   
    Box box1(12,25,30);
    cout<<"The Volume is "<<box1.volume()<<endl;
    

}