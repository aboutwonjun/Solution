#pragma once

#ifndef _LOGIN_FUNC_
#define _LOGIN_FUNC_

#include <string>

using std::string;


// ��ҹ���, ����, Ư������ �������� üũ
bool checkPwCombi(string str);

// �빮�ڰ� 1���� ������ true
bool findUpper(string str);

// �ҹ��ڰ� 1���� ������ true
bool findLower(string str);

// ���ڰ� 1���� ������ true
bool findNumber(string str);

// Ư�����ڰ� 1���� ������ true
bool findSpecial(string str);

// Ư�����ڸ� 0���� ū ��, �ƴϸ� 0
int checkSpecial(char* c);


#endif