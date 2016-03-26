#include <bits/stdc++.h> 

using namespace std;
struct stu
{int num;
    string name;
    float score[3];
    
};

int main()
{   void print(stu *student);
    stu s[5];
    for(int i=0;i<5;i++){
        cin>>s[i].name>>s[i].score[0]>>s[i].score[1]>>s[i].score[2];
        
    }
    print(s);

}
void print(stu *student)
{   for(int i=0;i<5;i++)
    cout<<student[i].name<<' '<<student[i].score[0]<<student[i].score[1]<<student[i].score[2];

    
}