#include "../My_include/head"
#include "../My_include/Students"
#include "../My_include/Schools"
#include "../My_include/Teachers"
#include "../My_include/Classrooms"
using namespace std;

int main()
{   
    setlocale(LC_ALL, "zh_CN.UTF-8"); //使用UTF-8

    //智能指针 创建三个类
    shared_ptr<Classrooms> Cl(new Classrooms());
    shared_ptr<Students> St(new Students("zqh", NULL, Cl));
    shared_ptr<Teachers> Te(new Teachers("主任"));

    // Te->添加班级c(Cl);
    

    St->减分();
    int *a = St->输出分数();
    cout << a[0] << " " << a[1] << endl;

    Te->加分(St, 3);
    a = St->输出分数();
    cout << a[0] << " " << a[1] << endl;

    Cl->打印其他();



    system("pause");
    return 0;
}