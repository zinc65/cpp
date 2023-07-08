#include <iomanip>
#include <iostream>
using namespace std;
int main()
{
    double pi = 0;
    for (int i = 1; 1.0 / i >= 1e-8; i += 2) {
        if ((i + 1) / 2 % 2 != 0) {
            pi += 1.0 / i;
        } else {
            pi -= 1.0 / i;
        }
    }
    pi *= 4;
    cout << setiosflags(ios::fixed);
    cout << setprecision(6) << pi;
}