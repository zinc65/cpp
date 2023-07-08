#include <cstdio>
#include <iostream>
using namespace std;
bool isOddDigit(int n)
{
    string s = to_string(n);
    for (auto c:s){
        if(c%2==0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    cout << (isOddDigit(n) ? "yes" : "no");
    return 0;
}