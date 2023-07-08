#include <iostream>
using namespace std;
class Student
{
public:
    int a;
    string b;
    int c;
    int d;
    int e;
    Student()
    {
        cin >> a >> b >> c >> d >> e;
    }
    ~Student()
    {
    }
    void set()
    {
        cin >> a >> b >> c >> d >> e;
    }
    int cal()
    {
        return c + d + e;
    }
    void print()
    {
        cout << "name: " << a << "\nID: " << b << "\nmath scores: " << c << "\nphysics scores: " << d << "\nenglish scores: " << e << "\noverall scores: " << this->cal() << "\n";
    }
    int id()
    {
        return a;
    }
};
int main()
{
    Student s[5];
    int a;
    cin >> a;
    int n = 0;
    for (int i = 0; i < 5; i++)
        if (s[i].cal() > n)
            n = s[i].cal();
    cout << "max scores: " << n << "\n";
    for (int i = 0; i < 5; i++)
        if (s[i].a == a)
            s[i].print();
}