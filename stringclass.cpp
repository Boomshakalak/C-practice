#include <iostream> 
#include <cstring>

using namespace std;
class String 
{
public:
    String()
    {
        p=NULL;
    }
    String(char *str);
    void display();
    friend bool operator >(String &a,String &b);
private:
    char *p;
};
String::String(char *str)
{
    p=str;
}
void String::display()
{
    cout<<p;
}
bool operator >(String &a,String &b)
{
   if (strcmp(a.p,b.p)>0)
    return true;
else return false;
}
int main()
{
    String string1("Hello!");
    String string2("Aello too");
    string1.display();
    cout<<endl;
    string2.display();
    cout<<endl;
    cout<<(string1>string2);
    return 0;

}