#include <iostream>
#include <algorithm> 
using namespace std;
struct person
{
    string name;
    int age;
};
bool cmp(person a,person b)
{
    return a.age<b.age;
}
int main()
{   
    person p[5]={{"Jack",15},{"Mike",13},{"Tom",15},{"May",19},{"Elly",14}};
    sort (p, p+5,cmp);
    for (person k:p)
        cout<<k.name<<" "<<k.age<<endl;

}
