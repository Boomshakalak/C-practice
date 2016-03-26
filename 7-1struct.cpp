#include <bits/stdc++.h> 

using namespace std;
struct Date
{ int month;
    int day;
    int year;

};

int main()
{   Date s;
    int k=0;
    cin>>s.year>>s.month>>s.day;
    int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
    if (s.year%4==0){for(int i=1;i<s.month;i++)k+=a[i];k+=s.day;}
    else {for(int i=1;i<s.month;i++)k+=b[i];k+=s.day;}
    cout<<"This is the "<<k<<"th day of the year";
    
    return 0;
    

}