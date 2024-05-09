
#include "Login_Func.h"



bool checkPwCombi(string str)
{
	bool pass = false;

	pass = findUpper(str);
	if (!pass) return false;

	pass = findLower(str);
	if (!pass) return false;

	pass = findNumber(str);
	if (!pass) return false;

	pass = findSpecial(str);

	return pass;
}


bool findUpper(string str)
{
	for (char& c : str)
	{
		// 대문자면 0이 아님
		if (isupper(c) != 0)
		{
			return true;
		}
	}

	return false;
}


bool findLower(string str)
{
	for (char& c : str)
	{
		// 소문자면 0이 아님
		if (islower(c) != 0)
		{
			return true;
		}
	}

	return false;
}

bool findNumber(string str)
{
	for (char& c : str)
	{
		// 숫자면 0이 아님
		if (isdigit(c) != 0)
		{
			return true;
		}
	}

	return false;
}


bool findSpecial(string str)
{
	for (char& c : str)
	{
		// 특수문자면 0이 아님
		if (checkSpecial(&c) != 0)
		{
			return true;
		}
	}

	return false;
}


int checkSpecial(char* c)
{
	switch (*c)
	{
	case '!':
		return 1;
	case '@':
		return 2;
	case '#':
		return 3;
	case '$':
		return 4;
	case '%':
		return 5;
	case '^':
		return 6;
	case '&':
		return 7;
	case '*':
		return 8;
	case '(':
		return 9;
	case ')':
		return 10;
	case '-':
		return 11;
	case '_':
		return 12;
	case '=':
		return 13;
	case '+':
		return 14;
	case '`':
		return 15;
	case '~':
		return 16;
	default:
		return 0;
	}
}