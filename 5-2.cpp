/*����һ��������Complex��ʹ����������ܹ�������
    Complex c1(3, 5); //�ø���3+5i��ʼ��c1
Complex c2(4.5); //��ʵ��4.5��ʼ��c2
c1.add(c2); //��c1��c2��ӱ�����c1��
c1.show(); //��c1���

���Ҫ��
��Ҫ���д�������빲һ���������֣�ǰ�������ֱַ�Ϊc1��ʵ�����鲿������������Ϊʵ��c2��
        ���һ�У�Ϊc1��c2��ӵĽ����
            �������һλС����

                ע�⣺���鲿Ϊ1��
    - 1����Ӧʡ���鲿����ʵ��Ϊ0���鲿��Ϊ0��Ӧʡ��ʵ����(�磺1 .0 - i��1 .0 + i��i�� - i)

        ����˵��
    ƽ̨������д�Ĵ�����в���,
    �����ȷ�ĸ�����

    �������룺3 5 4.5 ���������7 .5
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