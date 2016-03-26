#include <bits/stdc++.h> 

using namespace std;
struct operate
{
    int op1;
    int op2;
    string op3;
};
int main()
{  
    int n,m,k;
    operate op;
    int i;
    vector<operate> oplist;
    cin>>n>>m>>k;
    int* row=new int[n+1]();
    int* column=new int[m+1]();
    string* matrix=new string[m*n];
    for ( i=0;i<k;i++)
    {
        cin>>op.op1>>op.op2>>op.op3;  
        oplist.push_back(op);
    }
    for ( i = 0; i < k; ++i)
    {
        switch(oplist[i].op1)
        {
            case 1:
            row[oplist[i].op2-1]++;break;
            case 2:
            column[oplist[i].op2-1]++;break;
        }
       
    }
    for ( i = 0; i < k; ++i)
    {
        switch(oplist[i].op1)
        {
            case 1:
            row[oplist[i].op2-1]--;
            if (row[oplist[i].op2-1]==0)
            {
                for (int j = (oplist[i].op2-1)*m; j < oplist[i].op2*m; ++j)
                {
                    matrix[j]=oplist[i].op3;
                }
            }
            break;
            case 2:
            column[oplist[i].op2-1]--;
            if (column[oplist[i].op2-1]==0)
            {
                for (int j = 0; j < n; ++j)
                {
                    matrix[oplist[i].op2-1+j*m]=oplist[i].op3;
                }
            }
            break;
        }
    }
for (int i = 0; i < m*n; ++i)
{
    if (matrix[i]=="\0")matrix[i]="0";
    cout<<matrix[i];
    if (i%n!=m-1) cout<<" ";
    else cout<<endl;
}
             return 0;
   
}