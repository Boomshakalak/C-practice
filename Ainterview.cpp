#include <bits/stdc++.h> 

using namespace std;
int main()
{
    int n;
    int suma=0;
    int sumb=0;
    cin>>n;
    int *a = new int[n]; 
   int *b = new int[n]; 
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
        suma=a[i]|suma;
    }
     for (int i = 0; i < n; ++i)
    {
        cin>>b[i];
        sumb=b[i]|sumb;
    }
    cout<<suma+sumb<<endl;
    return 0;

}