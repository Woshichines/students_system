﻿#ifndef TEACHERS
#define TEACHERS
#include "head.hpp"

using namespace std;

class Teachers : public enable_shared_from_this<Teachers>
{   
    private:
    string m_老师姓名;
    string m_身份证号; 
    string m_家庭住址;
    vector<shared_ptr<Classrooms>> m_所在班级;

    private:
    shared_ptr<Teachers> self;


    public:
    Teachers(string 老师姓名, 
            vector<shared_ptr<Classrooms>> 所在班级 = {}, 
            string 身份证号 = "", 
            string 家庭住址 = "" 
           )
    :m_老师姓名(老师姓名) ,
    m_身份证号(身份证号),
    m_家庭住址(家庭住址),
    m_所在班级(所在班级)
    {}

    ~Teachers()
    {}

    //使用shared_from_this()接管对象
    int create_self();
    int 加分(shared_ptr<Students> 被操作学生, int 分数);
    int 减分(shared_ptr<Students> 被操作学生, int 分数);
    int 添加班级(shared_ptr<Classrooms> 班级);
};



#endif