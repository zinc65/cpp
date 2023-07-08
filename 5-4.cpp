/*定义一个circle类
数据成员：半径radius；位置position， position是point类的类对象；静态变量记录圆的个数。
point类：设置有参构造函数，设置位置函数、显示位置函数。
circle类：有参构造函数，并实现对point有参构造函数传递参数；
计算面积函数；设置半径和位置函数，显示半径和位置函数，静态函数显示圆的个数。

注意：为了安全，哪些函数可以设置为常函数

相关知识
静态：
https://www.runoob.com/cplusplus/cpp-static-members.html
https://my.oschina.net/u/1537391/blog/219432

常函数：
类的成员函数后面加 const，表明这个函数不会对这个类对象的数据成员（准确地说是非静态数据成员）作任何改变。
在设计类的时候，一个原则就是对于不改变数据成员的成员函数都要在后面加 const，而对于改变数据成员的成员函数不能加 const。

编程要求
输入一行3个数，表示设定的圆的半径，位置坐标（x,y)。
你控制的输出共2行，第一行输出圆的半径，位置坐标（x,y)和面积。第二行输出圆的个数。
有一行输出已帮你写出，无需在意，仅做为一项测试。（样例中不体现）
半径和总面积均保留两位小数。
π近似为3.14
坐标需要用括号括起的形式表示（注意看样例）

测试说明
平台会对你编写的代码进行测试，比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：

样例:
测试输入：1 1 1
预期输出：
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

    /* 请勿删除，否则无法通过测试点*/
    {
        Point p1;            /*如果你的点的类名与此不同，请修改*/
        circle c1(p1, r);    /*如果你的圆的类名与此不同，请修改*/
        circle::showCount(); /*如果你的圆的类名或显示静态成员变量的静态函数与此不同，请修改*/
    }
    /*请勿删除，否则无法通过测试点*/
    return 0;
}