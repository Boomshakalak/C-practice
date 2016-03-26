#include <bits/stdc++.h> 
using namespace std;
int a[20];
int n,k;
bool dfs(int i,int sum)
{
    if (i==n) return sum==k;
    return ( dfs(i+1,sum) || dfs(i+1,sum+a[i]));
}
int main()
{  
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cin>>k;
    if (dfs(0,0)) cout<<"Yes\n";
    else cout<<"No\n";
}