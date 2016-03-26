#include <bits/stdc++.h> 

using namespace std;
int main()
{void sort(char **p);
    const int m =20;
    int i;
    char **p,*pstr[5],str[5][m];
    for (i=0;i<5;i++)
        pstr[i]=str[i];
    cout<<"input 5 strings"<<endl;
    for (i=0;i<5;i++)
        cin>>pstr[i];
    p=pstr;
    sort(p);
    

}