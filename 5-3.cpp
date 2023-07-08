/*���һ��ʱ����Clock
    ���ݳ�Ա : ʱ(int hour),
               ��(int minute),
               ��(int second);
��Ա���������캯��(Clock(int hour = 0, int minute = 0, int second = 0))��
���ú���(void settime(int h, int m, int s))��
��ʾʱ�亯��(void showtime())�����㱾����ʱ����һ����ʱ�̵ļ����������(int interval(int h, int m, int s)) �β�Ҳ������clock��
��д����������Clock �ࡣ

    ���Ҫ��
    ��д�������Ҫ���������У���һ�б�ʾ��Ҫ�趨��ʱ�䣬�ڶ��б�ʾ��Ҫ�������Աȵ�ʱ�䡣������У���һ�б�ʾ��ʾ��ʱ�䣨��22 : 04 : 51�����ڶ��б�ʾ��������ļ����������������(����ʱ��Ϊͬһ���ڵ�����ʱ��)

        ����˵��
    ƽ̨������д�Ĵ�����в��ԣ��ȶ����������ֵ��ʵ����ȷ��ֵ��ֻ����������ȫ��������ȷ����ͨ�����ԣ�

    �������룺
    22 4 51 1 59 59 Ԥ�������
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