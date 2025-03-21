#include "../My_include/head.hpp"
#include "../My_include/Students.hpp"
#include "../My_include/Schools.hpp"
#include "../My_include/Teachers.hpp"
#include "../My_include/Classrooms.hpp"

using namespace std;

int Classrooms::m_总学生数量 = 0;
int main()
{   
    setlocale(LC_ALL, "zh_CN.utf-8"); //使用UTF-8
    system("chcp 65001 > NUL"); //使用UTF-8,指定命令行为UTF-8

    //智能指针 创建三个类
    shared_ptr<Classrooms> Cl(new Classrooms("2025级3班"));
    shared_ptr<Students> St(new Students("张三", Cl));
    shared_ptr<Teachers> Te(new Teachers("李四"));

    St -> create_self();
    Te -> create_self();

    Te->添加班级(Cl);

    St->更改班级(Cl);
    Cl->增加学生(St);


    auto Cls = make_shared<Classrooms>();
    vector<shared_ptr<Students>> Stu;
    
    for (int i = 0; i < 20; i++)
    {
        Stu.push_back(make_shared<Students>("学生", Cl));
        Stu[i]->create_self();
        Cl -> 增加学生(Stu[i]);

        Stu[i]->更改班级(Cls);
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