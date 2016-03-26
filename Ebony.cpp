#include <bits/stdc++.h> 

using namespace std;
int main()
{
    int a,b,c;
    int i,j;
    cin>>a>>b>>c;
    for (i=0;i<=c/a;i++)
    {
        for ( j=0;j<=c/b;j++)
        {
            if ((i*a+j*b)==c) 
                {cout<<"Yes"<<endl;break;}
        }
        if ((i*a+j*b)==c) break;
                
    }
    if ((i*a+j*b)!=c) cout<<"No"<<endl;
    return 0;    

}