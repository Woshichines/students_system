#ifndef CLASSROOMS
#define CLASSROOMS

#include "head.hpp"

using namespace std;

//教室
class Classrooms : public enable_shared_from_this<Classrooms>
{
    public:
        static int m_总学生数量;

    private:
    shared_ptr<Schools> m_校区;
    int m_级数;
    int m_班数;
    string m_班名;
    int m_学生数;
    vector<shared_ptr<Students>> m_学生;
    vector<shared_ptr<Teachers>> m_教师;

    private:
    shared_ptr<Classrooms> self;

    public:
        Classrooms(
                    string 班名 = to_string(求级数())+"级新建班级",
                    shared_ptr<Schools> 校区 = NULL,  
                    int 级数 = 求级数(), 
                    int 班数 = 0, 
                    vector<shared_ptr<Students>> 学生 = {},
                    vector<shared_ptr<Teachers>> 教师 = {})
                    :   m_校区(校区),
                        m_级数(级数),
                        m_班数(班数),
                        m_班名(班名),
                        m_学生数(学生.size()),
                        m_学生(学生),
                        m_教师(教师)
                        {}

        //使用shared_from_this()接管对象
        int create_self(); 
        int 打印届数(); 
        int 打印其他(); 
        int 增加学生(shared_ptr<Students> 学生);   
        int 删除学生(shared_ptr<Students> 学生);    
        int 增加教师(shared_ptr<Teachers> 老师);   
        int 删除教师(shared_ptr<Teachers> 老师);
        auto 输出学生列表();

};

#endif