#include "../My_include/Teachers"
#include "../My_include/Students"
#include "../My_include/Classrooms"

#ifndef TEACHERS_CPP
#define TEACHERS_CPP

using namespace std;

int Teachers::create_self()
{
    self = shared_from_this();
    return 0;
}

int Teachers::加分(shared_ptr<Students> 被操作学生, int 分数 = 1)
{
    被操作学生 -> 加分(分数);
    return 0;
}

int Teachers::减分(shared_ptr<Students> 被操作学生, int 分数 = 1)
{
    被操作学生 -> 减分(分数);
    return 0;
}

int Teachers::添加班级(shared_ptr<Classrooms> 班级)
{
    m_所在班级.push_back(班级);
    班级 -> 增加教师(self);
    return 0;
}

#endif