// MyFunctions.h

#pragma once
#ifndef MYFUNCTIONS_H
#define MYFUNCTIONS_H

#include <iostream>
#include <string>
#include <vector>

#include "MyFunctions.cpp"

using namespace std; 

// 함수 원형 선언
void getStudentInfo(std::vector<std::string>& name, std::vector<int>& age, std::vector<int>& birth_year, std::vector<int>& birth_month, std::vector<int>& birth_day, int student_num);
void printStudentInfo(const std::vector<std::string>& name, const std::vector<int>& age, const std::vector<int>& birth_year, const std::vector<int>& birth_month, const std::vector<int>& birth_day, int student_num);
void printAverageStudentAge(const std::vector<int>& age, int student_num);
void printFindEarliestBday(const std::vector<std::string>& name, const std::vector<int>& age, const std::vector<int>& birth_year, const std::vector<int>& birth_month, const std::vector<int>& birth_day, int student_num);
void editStudentInfo(std::vector<std::string>& name, std::vector<int>& age, std::vector<int>& birth_year, std::vector<int>& birth_month, std::vector<int>& birth_day);

#endif // MYFUNCTIONS_H
