//
//  Course.hpp
//  StudentsSystem
//
//  Created by 张昊 on 16/11/9.
//  Copyright © 2016年 张昊. All rights reserved.
//

#ifndef Course_h
#define Course_h

#include <string>
#include <iostream>
using namespace std;

class Course
{
private:
    string cName;
    int cScore;
    int Grade;
public:
    Course();
    Course(string name, int score);
    void setGrade(int g);
    int getGrade() const;
    string getcName() const;
    int getcScore() const;
    ~Course();
};


#endif /* Course_h */
