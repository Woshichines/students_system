﻿#include <iostream>
#include <string>
#include <cmath>
#include <list>
#include <array>
#include <vector>
#include <algorithm> 
#include <fstream>   
#include <map>       
#include <set>       
#include <queue>     
#include <stack>     
#include <tuple>     
#include <utility>   
#include <filesystem>
#include <ctime>
#include <memory>
#include <algorithm>

#ifndef HEAD
#define HEAD

using namespace std;

class Teachers;
class Students;
class Schools; 
class Classrooms;

inline int 求级数()
{
    long long mytime = time(NULL);
    long long y = 31536000;
    long long year = mytime / y;
    int int_year = static_cast<int>(year);
    return int_year + 1970;
}

#endif