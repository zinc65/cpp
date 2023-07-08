#include <iostream>
#include <sstream>
using namespace std;
int main()
{
    int a, t, n, b;
    cin >> a >> n;
    t = a;
    stringstream ss;
    for (int i = 0; i < n; i++) {
        b += t;
        ss << t << a;
        ss >> t;
        ss.clear();
    }
    cout << b;
}