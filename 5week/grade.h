#pragma once
//grade.h

#ifndef GUARD_grade_h
#define GUARD_grade_h

#include<vector>
#include"Student_info.h"

using std::vector; // 추가
double grade(double, double, const vector<double>&);
double grade(double, double, const vector<double>&);
double grade(const Student_info&);

bool fgrade(const Student_info&);
bool pgrade(const Student_info&);
bool did_all_hw(const Student_info&);

#endif // !GUARD_grade_h
