/*����һ��circle��
���ݳ�Ա���뾶radius��λ��position�� position��point�������󣻾�̬������¼Բ�ĸ�����
point�ࣺ�����вι��캯��������λ�ú�������ʾλ�ú�����
circle�ࣺ�вι��캯������ʵ�ֶ�point�вι��캯�����ݲ�����
����������������ð뾶��λ�ú�������ʾ�뾶��λ�ú�������̬������ʾԲ�ĸ�����

ע�⣺Ϊ�˰�ȫ����Щ������������Ϊ������

���֪ʶ
��̬��
https://www.runoob.com/cplusplus/cpp-static-members.html
https://my.oschina.net/u/1537391/blog/219432

��������
��ĳ�Ա��������� const������������������������������ݳ�Ա��׼ȷ��˵�ǷǾ�̬���ݳ�Ա�����κθı䡣
��������ʱ��һ��ԭ����Ƕ��ڲ��ı����ݳ�Ա�ĳ�Ա������Ҫ�ں���� const�������ڸı����ݳ�Ա�ĳ�Ա�������ܼ� const��

���Ҫ��
����һ��3��������ʾ�趨��Բ�İ뾶��λ�����꣨x,y)��
����Ƶ������2�У���һ�����Բ�İ뾶��λ�����꣨x,y)��������ڶ������Բ�ĸ�����
��һ������Ѱ���д�����������⣬����Ϊһ����ԡ��������в����֣�
�뾶���������������λС����
�н���Ϊ3.14
������Ҫ�������������ʽ��ʾ��ע�⿴������

����˵��
ƽ̨������д�Ĵ�����в��ԣ��ȶ����������ֵ��ʵ����ȷ��ֵ��ֻ����������ȫ��������ȷ����ͨ�����ԣ�

����:
�������룺1 1 1
Ԥ�������
1.00 (1,1) 3.14
1
*/
#include <iostream>
#include <iomanip>
#include <cstdio>

using namespace std;
class Point
{
public:
    Point(double x_ = 0, double y_ = 0) : x(x_), y(y_) {}
    void set(double x_, double y_)
    {
        x = x_;
        y = y_;
    }
    void print()
    {
        cout << '(' << x << ',' << y << ')' << "\n";
    }

private:
    double x, y;
};

class circle
{
public:
    circle(Point position_, double r_) : position(position_), r(r_)
    {
        cout << setiosflags(ios::fixed) << setprecision(2) << r;
        position.print();
        s = 3.14 * r * r;
        cout << setiosflags(ios::fixed) << setprecision(2) << s;
    }
    Point position;
    double r, s; 
    static void showCount() 
    {
        puts("1");
    }
};

int main()
{
    double r, a, b;
    cin >> r >> a >> b;
    Point p(a, b);
    circle c(p, r);

    /* ����ɾ���������޷�ͨ�����Ե�*/
    {
        Point p1;            /*�����ĵ��������˲�ͬ�����޸�*/
        circle c1(p1, r);    /*������Բ��������˲�ͬ�����޸�*/
        circle::showCount(); /*������Բ����������ʾ��̬��Ա�����ľ�̬������˲�ͬ�����޸�*/
    }
    /*����ɾ���������޷�ͨ�����Ե�*/
    return 0;
}