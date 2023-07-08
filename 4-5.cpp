#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;
int dfs(int n)
{
    return n < 10 ? n : dfs(n / 10) + n % 10;
}
int main()
{
    int n;
    cin >> n;
    cout << dfs(n);
    return 0;
}