#include <bits/stdc++.h> 

using namespace std;

int main()
{int a[101]={0};
    a[1]={1};
    for(int i=2;i<100;i++){
        for (int j=2;j<=100/i;j++){
            a[i*j]=1;
        }


    }
    for (int i=1;i<101;i++){
        if (a[i]==0) cout<<i<<' ';
    }
    

}