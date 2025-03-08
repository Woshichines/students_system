#include "../My_include/Students"
#include "../My_include/Classrooms"

#ifndef STUDENTS_CPP
#define STUDENTS_CPP

int Students::create_self()
{
    self = shared_from_this();
    return 0;
}

int Students::加分(int 分数 = 1)
{
    m_分数[0] += 分数;
    return 0;
}

int Students::减分(int 分数 = 1)
{
    m_分数[1] -= 分数;
    return 0;
}

int* Students::输出分数()
{
    return m_分数;
}

shared_ptr<Classrooms> Students::输出班级()
{
    return m_班级;
}

int Students::更改班级(shared_ptr<Classrooms> 班级)
{
    m_班级 -> 删除学生(self);
    m_班级 = 班级;
    m_班级 -> 增加学生(self);

    return 0;
}

#endif