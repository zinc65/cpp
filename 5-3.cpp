/*设计一个时钟类Clock
    数据成员 : 时(int hour),
               分(int minute),
               秒(int second);
成员函数：构造函数(Clock(int hour = 0, int minute = 0, int second = 0))；
设置函数(void settime(int h, int m, int s))；
显示时间函数(void showtime())，计算本对象时刻与一给定时刻的间隔秒数函数(int interval(int h, int m, int s)) 形参也可以是clock。
编写主函数测试Clock 类。

    编程要求
    编写程序完成要求，输入两行，第一行表示需要设定的时间，第二行表示需要与类对象对比的时间。输出两行，第一行表示显示的时间（如22 : 04 : 51），第二行表示计算出来的间隔秒数（正数）。(两个时刻为同一天内的两个时刻)

        测试说明
    平台会对你编写的代码进行测试，比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：

    测试输入：
    22 4 51 1 59 59 预期输出：
    22 : 04 : 51 72292
    */
#include <iostream>
#include <iomanip>
using namespace std;
class Clock
{
public:
    Clock(int hour = 0, int minute = 0, int second = 0) : hour(hour), minute(minute), second(second) {}
    void settime(int h, int m, int s)
    {
        hour = h;
        minute = m;
        second = s;
    }
    void showtime()
    {
        cout << setw(2) << setfill('0') << hour << ':' << setw(2) << setfill('0') << minute << ':' << setw(2) << setfill('0') << second << '\n';
    }
    int interval(Clock c)
    {
        return abs((hour - c.hour) * 3600 + (minute - c.minute) * 60 + (second - c.second));
    }

    int hour,
        minute,
        second;
};

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    Clock c1(a, b, c), c2(d, e, f);
    c1.showtime();
    cout << c1.interval(c2);
}