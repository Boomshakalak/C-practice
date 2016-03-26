#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Student{
    string name;
    int score;
    bool operator <(const Student &s) const{
        if (score == s.score) return name < s.name;
        return score < s.score;
    }
};

Student students[] = {
  {"Amy", 69},
  {"Jack", 100},
  {"Bob", 69}
};

bool comp(const Student&a, const Student&b)
{
    if (a.score == b.score) return a.name < b.name;
    return a.score > b.score;
}

int main()
{
    int n = sizeof(students)/sizeof(Student);
    sort(students, students+n, comp);
    cout << "Descending:" << endl;
    for (auto& s: students)
        cout << s.name << " " << s.score << endl;
    sort(students, students+n);
    cout << "Ascending:" << endl;
    for (auto& s: students)
        cout << s.name << " " << s.score << endl;
    return 0;
}