#include <bits/stdc++.h> 

using namespace std;

class Student

{
public:
    void display()
    {
        cout<<"num:"<<num<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"sex:"<<sex<<endl;
    }
   
protected:
    int num;
    string name;
    char sex;

};
class Studentl:private Student
{
public:
    Student1()
    {
        num=10001;
        name="Wang";
        sex='m';
        age=24;
        address="Huaibei";
    }
    void displayl()
    {
        display();
        cout<<"age:"<<age<<endl;
        cout<<"address:"<<address<<endl;

    }
private:
    int age;
    string address;

};
int main()
{
    Studentl stu;
    stu.displayl();
    return 0;

}