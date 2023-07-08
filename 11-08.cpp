/*在右侧编辑器中的Begin - End之间补充代码，声明并定义一个学生信息类 StInfo，该类有四个成员变量和两个函数，其访问性都为公有，具体要求如下：

                           学号：int SID

     姓名：char *Name

     班级：char *Class

  手机号：char *Phone
      给成员变量赋值的函数： void
       SetInfo(int sid, char *name, char *cla, char *phone)
   打印学生信息的函数：void PrintInfo()，格式请参考测试说明。

    测试说明
    平台会对你编写的代码进行测试，比对你输出的数值与实际正确数值，只有所有数据全部计算正确才能通过测试：

    测试输入：1 小郭 计科1班 12312340000 预期输出：

    学号：1
    姓名：小郭
    班级：计科1班
    手机号：12312340000
    测试输入：2 小王 计科2班 12312340001 预期输出：

    学号：2
    姓名：小王
    班级：计科2班
    手机号：12312340001
    */

#include <iostream>
    using namespace std;

class StInfo
{
    /********* Begin *********/
    //在此处声明StInfo类
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
        printf("学号：%d\n姓名：\n%s班级：%s\n手机号：%s\n",SID,Name,Class,Phone);
    }
    /********* End *********/
};

/********* Begin *********/
//在此处定义StInfo类
StInfo s;

/********* End *********/
int main(){
    int n;
    char a[100], b[100], c[100];
    cin >> n >> a >> b >> c;
    s.SetInfo(n, a, b, c);
    s.PrintInfo();
}
