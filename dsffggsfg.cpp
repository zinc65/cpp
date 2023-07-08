#include <iostream>
using namespace std;

/********* Begin *********/
class Repeater
{
    //���������������
public:
    virtual void Play() = 0;
    virtual ~Repeater()
    {
        cout << "�飡\n";
    }
};
//����������Ķ���

class ForRepeater : public Repeater
{
    //���򸴶���������
public:
    virtual void Play()
    {
        cout << "û�뵽��Ҳ��һ��������\n";
    }
    ~ForRepeater()
    {
        cout << "���������� ը��\n";
    }
};
//���򸴶����Ķ���

class RevRepeater : public Repeater
{
    //���򸴶���������
public:
    virtual void Play()
    {
        cout << "��������һ��Ҳ�㵽��û\n";
    }
    ~RevRepeater()
    {
        cout << "���������� ը��\n";
    }
};
//���򸴶����Ķ���

//��ͨ����
Repeater *CreateRepeater(int type)
{
    //����type����ָ���ĸ�����
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