// 包含两种I/O库，可以使用任一种输入输出方式
#include <cstdio>
#include <iostream>
using namespace std;
int digitR(int a,int b)
{
    string s = to_string(a);
    return s[b - 1]-48;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << digitR(a, b);
    return 0;
}