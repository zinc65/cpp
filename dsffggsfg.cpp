#include <iostream>
using namespace std;

/********* Begin *********/
class Repeater
{
    //复读机基类的声明
public:
    virtual void Play() = 0;
    virtual ~Repeater()
    {
        cout << "砰！\n";
    }
};
//复读机基类的定义

class ForRepeater : public Repeater
{
    //正向复读机的声明
public:
    virtual void Play()
    {
        cout << "没想到你也是一个复读机\n";
    }
    ~ForRepeater()
    {
        cout << "正·复读机 炸了\n";
    }
};
//正向复读机的定义

class RevRepeater : public Repeater
{
    //反向复读机的声明
public:
    virtual void Play()
    {
        cout << "机读复个一是也你到想没\n";
    }
    ~RevRepeater()
    {
        cout << "机读复·反 炸了\n";
    }
};
//反向复读机的定义

//普通函数
Repeater *CreateRepeater(int type)
{
    //根据type创建指定的复读机
    if (type == 0)
        return new ForRepeater;
    else if (type == 1)
        return new RevRepeater;
    else
        return 0;
}

/********* End *********/
int main(){
    int n;
    cin >> n;
    auto tmp = CreateRepeater(n);
    tmp->Play();
    delete tmp;
}