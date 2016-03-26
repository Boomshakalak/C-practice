#include <bits/stdc++.h> 

using namespace std;
template <class numtype>
class Compare
{
public:
    Compare(numtype a, numtype b)
    {
        x=a;
        y=b;  
    }
    numtype max()
    {
        return (x>y)?x:y;
    }
private:
    numtype x;
    numtype y;
};
int main()
{
    Compare <int> cmp1(3,7);
    cout<<cmp1.max()<<" is The largest integer of the two."<<endl;
    Compare <string> cmp2("China","United States");
    cout<<cmp2.max()<<" seems to be a greater one when we call it a string"<<endl;
    

}