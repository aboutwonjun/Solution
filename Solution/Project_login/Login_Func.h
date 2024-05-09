#pragma once

#ifndef _LOGIN_FUNC_
#define _LOGIN_FUNC_

#include <string>

using std::string;


// 대소문자, 숫자, 특수문자 포함인지 체크
bool checkPwCombi(string str);

// 대문자가 1개라도 있으면 true
bool findUpper(string str);

// 소문자가 1개라도 있으면 true
bool findLower(string str);

// 숫자가 1개라도 있으면 true
bool findNumber(string str);

// 특수문자가 1개라도 있으면 true
bool findSpecial(string str);

// 특수문자면 0보다 큰 값, 아니면 0
int checkSpecial(char* c);


#endif