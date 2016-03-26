#include <bits/stdc++.h> 

using namespace std;
void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;

}
int main()
{int u,v,r;
    cin>>u>>v;
    if (v>u) swap(&u,&v);
    while (u%v!=0){
        r=u%v;
        u=v;
        v=r;

    }
    cout<<v<<endl;

}