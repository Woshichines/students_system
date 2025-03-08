#include "../My_include/head"
#include "../My_include/Students"
#include "../My_include/Schools"
#include "../My_include/Teachers"
#include "../My_include/Classrooms"

using namespace std;

int Classrooms::m_总学生数量 = 0;
int main()
{   
    setlocale(LC_ALL, "zh_CN.utf-8"); //使用UTF-8
    system("chcp 65001 > NUL");

    //智能指针 创建三个类
    auto Cl = make_shared<Classrooms>();
    auto St = make_shared<Students>("张三", Cl);
    auto Te = make_shared<Teachers>("李四");

    St -> create_self();
    Te -> create_self();

    Te->添加班级(Cl);

    St->更改班级(Cl);
    Cl->增加学生(St);


    auto Cls = make_shared<Classrooms>();
    
    for (int i = 0; i < 20; i++)
    {
        auto Stu = make_shared<Students>("张三", Cls);
        Stu->create_self();

        Stu->更改班级(Cls);
    }

    St->减分(1);
    int *a = St->输出分数();
    cout << a[0] << " " << a[1] << endl;

    Te->加分(St, 3);
    a = St->输出分数();
    cout << a[0] << " " << a[1] << endl;

    Cl->打印其他();

    system("pause");
    return 0;
}