/*定义一个复数类Complex，使得下面代码能够工作。
    Complex c1(3, 5); //用复数3+5i初始化c1
Complex c2(4.5); //用实数4.5初始化c2
c1.add(c2); //将c1和c2相加保存在c1中
c1.show(); //将c1输出

编程要求
按要求编写程序，输入共一行三个数字，前两个数字分别为c1的实部和虚部，第三个数字为实数c2。
        输出一行，为c1与c2相加的结果。
            结果保留一位小数。

                注意：若虚部为1或
    - 1，则应省略虚部；若实部为0，虚部不为0，应省略实部。(如：1 .0 - i，1 .0 + i，i， - i)

        测试说明
    平台会对你编写的代码进行测试,
    输出正确的复数。

    样例输入：3 5 4.5 样例输出：7 .5
    + 5.0i
    */
#include <iostream>
#include <iomanip>

using namespace std;
class Complex
{
public:
    double x, y;
    Complex(double x_, double y_) : x(x_), y(y_) {}
    Complex(double x_) : x(x_), y(0) {}
    void add(const Complex &c)
    {
        x += c.x;
        y += c.y;
    }
    void show()
    {
        cout << setiosflags(ios::fixed) << setprecision(1);
        if (x != 0)
        {
            cout << x;
            if (y >= 0)
                cout << '+';
        }
        if (y == 0)
            cout << 0;
        else
        {
            if (y == -1)
                cout << '-';
            if (y != 1 && y != -1)
                cout << y;
            cout << "i";
        }
    }
};
int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    Complex c1(a, b), c2(c);
    c1.add(c2);
    c1.show();
}