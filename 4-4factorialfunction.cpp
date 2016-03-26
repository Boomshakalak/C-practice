#include <bits/stdc++.h> 

using namespace std;
int fac(int k){
    int res=1;
    for (int i=1;i<=k;i++){
        res*=i;
    }
    return res;
}
int main()
{int a,b,c;
    cout<<"Pleas enter a b c!"<<endl;
    cin>>a>>b>>c;
    cout<<fac(a)+fac(b)+fac(c);
    

}