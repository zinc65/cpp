/*���Ҳ�༭���е�Begin - End֮�䲹����룬����������һ��ѧ����Ϣ�� StInfo���������ĸ���Ա����������������������Զ�Ϊ���У�����Ҫ�����£�

                           ѧ�ţ�int SID

     ������char *Name

     �༶��char *Class

  �ֻ��ţ�char *Phone
      ����Ա������ֵ�ĺ����� void
       SetInfo(int sid, char *name, char *cla, char *phone)
   ��ӡѧ����Ϣ�ĺ�����void PrintInfo()����ʽ��ο�����˵����

    ����˵��
    ƽ̨������д�Ĵ�����в��ԣ��ȶ����������ֵ��ʵ����ȷ��ֵ��ֻ����������ȫ��������ȷ����ͨ�����ԣ�

    �������룺1 С�� �ƿ�1�� 12312340000 Ԥ�������

    ѧ�ţ�1
    ������С��
    �༶���ƿ�1��
    �ֻ��ţ�12312340000
    �������룺2 С�� �ƿ�2�� 12312340001 Ԥ�������

    ѧ�ţ�2
    ������С��
    �༶���ƿ�2��
    �ֻ��ţ�12312340001
    */

#include <iostream>
    using namespace std;

class StInfo
{
    /********* Begin *********/
    //�ڴ˴�����StInfo��
public:
    int SID;
    char *Name, *Class, *Phone;
    void SetInfo(int sid, char *name, char *cla, char *phone){
        SID = sid;
        Name = name;
        Class = cla;
        Phone = phone;
    }
    void PrintInfo(){
        printf("ѧ�ţ�%d\n������\n%s�༶��%s\n�ֻ��ţ�%s\n",SID,Name,Class,Phone);
    }
    /********* End *********/
};

/********* Begin *********/
//�ڴ˴�����StInfo��
StInfo s;

/********* End *********/
int main(){
    int n;
    char a[100], b[100], c[100];
    cin >> n >> a >> b >> c;
    s.SetInfo(n, a, b, c);
    s.PrintInfo();
}
