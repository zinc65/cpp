#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

bool isPalindromes(int n)
{
    string s = to_string(n);
    int a = s.length() - 1, i = 0;
    for (; i < a; i++, a--) {
        if (s[i] != s[a])
            return false;
    }
    return true;
}

void printfPalindromes()
{
    int n = 0;
    for (int i = 0; i <= 1000; i++) {
        if (isPalindromes(i)) {
            n++;
            cout << i;
            if (n < 10)
                cout << " ";
            else {
                cout << '\n';
                n = 0;
            }
        }
    }
}

int main()
{
    int n, t;
    cin >> t >> n;
    if (t == 5)
        printfPalindromes();
    else {
        if (isPalindromes(n))
            cout << "Yes";
        else
            cout << "No";
    }
    return 0;
}
