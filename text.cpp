#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    stringstream ss;
    int a = 2, b = 3;
    ss << a;
    ss << b;
    int c;
    ss >> c;
    ss.clear(); // VERY IMPORTANT!!!

    cout
        << c; // 23
    // ok
    cout << ss.str();
    ss << 2;
    cout << ss.str();
}
