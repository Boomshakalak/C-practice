#include <bits/stdc++.h> 

using namespace std;

int main()
{
    float a,b,c,disc;
    cout<<"plz input the parameter:a,b,c"<<endl;
    cin>>a>>b>>c;
    disc=b*b-4*a*c;
    if (a==0)
        cerr<<"a is zero,error!!"<<endl;
    else if (disc<0)
        cerr<<"delta below zero!error!"<<endl;
    else 
        cout<<"caculating!"<<endl;
    return 0;

}