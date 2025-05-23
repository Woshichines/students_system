﻿#ifndef STUDENTS
#define STUDENTS

#include "head.hpp"

using namespace std;


class Students : public enable_shared_from_this<Students>
{   
    private:
    shared_ptr<Classrooms> m_班级;
    shared_ptr<Schools> m_校区;      
    string m_姓名;      
    int m_学号;        
    string m_身份证号; 
    string m_家庭住址;
    shared_ptr<Students> self;

    private:
    int m_分数[2] = {0, 0};

    public:
    Students(string 姓名, 
     shared_ptr<Classrooms> 班级 = NULL,
     shared_ptr<Schools> 校区 = NULL, 
     int 学号 = 0, 
     string 身份证号 = "", 
     string 家庭住址 = "")
        : m_姓名(姓名), 
        m_学号(学号), 
        m_身份证号(身份证号), 
        m_家庭住址(家庭住址)
        {
           m_校区 = 校区;
           m_班级 = 班级;
        }

        ~Students(){}

        //使用shared_from_this()接管对象
        int create_self();
        int 加分(int 分数);
        int 减分(int 分数);
        int* 输出分数();
        shared_ptr<Classrooms> 输出班级();
        int 更改班级(shared_ptr<Classrooms> 班级);
};

#endif