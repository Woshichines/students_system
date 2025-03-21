#include "../My_include/Classrooms.hpp"


#ifndef CLASSROOMS_CPP
#define CLASSROOMS_CPP



int Classrooms::create_self()
{
    self = shared_from_this();
    return 0;
}

int Classrooms::打印届数()
{
    cout << m_级数 << endl;
    return 0;
}

int Classrooms::打印其他()
{
    cout << m_级数<< endl
        << m_学生数 << endl
        << m_总学生数量 << endl
        << m_班名 << endl
        << m_班数 << endl;
    return 0;
}

int Classrooms::增加学生(shared_ptr<Students> 学生)
{
    m_学生数 += 1;
    m_总学生数量 += 1;
    m_学生.push_back(学生);

    return 0;
}

int Classrooms::删除学生(shared_ptr<Students> 学生)
{
    m_学生数 -= 1;
    m_总学生数量 -= 1;
    return 0;
}

int Classrooms::增加教师(shared_ptr<Teachers> 教师)
{
    m_教师.push_back(教师);
    return 0;

}

int Classrooms::删除教师(shared_ptr<Teachers> 教师)
{
    m_教师.erase(remove(m_教师.begin(), m_教师.end(), 教师), m_教师.end());
    return 0;
}

auto Classrooms::输出学生列表()
{
    return m_学生;
}

#endif