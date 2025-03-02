#include "../My_include/head"
#include "../My_include/Students"
#include "../My_include/Schools"
#include "../My_include/Teachers"
#include "../My_include/Classrooms"
using namespace std;

int main()
{
    shared_ptr<Students> St(new Students("zqh"));
    shared_ptr<Teachers> Te(new Teachers("主任"));

    St->减分();
    cout << St->输出分数() << endl;

    Te->加分(St, 3);
    cout << St->输出分数() << endl;

    

    system("pause");
    return 0;
}