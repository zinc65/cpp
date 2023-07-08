#include <cmath>
#include <iostream>

using namespace std;

class Num {
public:
    Num()
    {
        n = 0;
        cout << "无参构造函数被调用\n";
    }
    Num(int i)
    {
        n = i;
        cout << "有参构造函数被调用\n";
    }
    Num(const Num& nn)
    {
        n = nn.n;
        cout << "拷贝构造函数被调用\n";
    }
    ~Num()
    {
        cout << "析构函数被调用\n";
    }
    int get()
    {
        return n;
    }
    void put(int n_)
    {
        n = n_;
    }
    void wanshu()
    {
        int s = 0;
        for (int j = 1; j < n; j++) {
            if (n % j == 0)
                s += j;
        }
        if (s == n)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    void zhishu()
    {
        int a = sqrt(n);
        for (int i = 2; i <= a; i++) {
            if (n % i == 0) {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
    void huiwenshu()
    {
        string s = to_string(n);
        int a = s.length() - 1, i = 0;
        for (; i < a; i++, a--) {
            if (s[i] != s[a]) {
                cout << "No\n";
                return;
            }
        }
        cout << "Yes\n";
    }
    int weishu()
    {
        string s(to_string(n));
        cout << s.length() << '\n';
    }

private:
    int n;
};
int main()
{
    int t, n;
    cin >> t;
    if (t == 1) {
        Num a, b(1), c(a);
    } else if (t == 2) {
        cin >> n;
        Num a;
        a.put(n);
        a.wanshu();
    } else if (t == 3) {
        cin >> n;
        Num a;
        a.put(n);
        a.zhishu();
    } else if (t == 4) {
        cin >> n;
        Num a;
        a.put(n);
        a.huiwenshu();
    } else if (t == 5) {
        cin >> n;
        Num a;
        a.put(n);
        a.weishu();
    }
}