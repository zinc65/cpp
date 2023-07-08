// 包含两种I/O库，可以使用任一种输入输出方式
#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;

int numberDigit(int n)
{
    string s = to_string(n);
    return s.length();
}
int changeNumber(int n)
{
    int len = numberDigit(n);
    int a = n % 10;
    n /= 10;
    n += a * pow(10, len - 1);
    return n;
}

int main()
{
    int x = 18;
    while (x) {
        int z;
        //       y = numberDigit(x);
        z = changeNumber(x);
        if (z == (x << 2)) {
            cout << x;
            return 0;
        }
        x += 10;
    }
    return 0;
}