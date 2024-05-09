//--------------------------------------------------------
// 
// main func
//
// 2024.05.09 john @ spreatics
// Codingon SmartFactory course C++
// 
// Login check sample code 
// Upper, Lower, Number, Special character check
//
//--------------------------------------------------------


#include <iostream>
#include <string>

#include "Login_Func.h"

using std::cout;
using std::endl;
using std::string;

int main()
{
	string pw = "CodingOn@23";
	cout << "input: " << pw << endl;
	cout << "Upper check: " << findUpper(pw) << endl;
	cout << "Lower check: " << findLower(pw) << endl;
	cout << "Number check: " << findNumber(pw) << endl;
	cout << "Special check: " << findSpecial(pw) << endl;
	cout << "PW check: " << checkPwCombi(pw) << endl;
	cout << endl;

	pw = "12345678#@!";
	cout << "input: " << pw << endl;
	cout << "Upper check: " << findUpper(pw) << endl;
	cout << "Lower check: " << findLower(pw) << endl;
	cout << "Number check: " << findNumber(pw) << endl;
	cout << "Special check: " << findSpecial(pw) << endl;
	cout << "PW check: " << checkPwCombi(pw) << endl;
	cout << endl;	
	
	
	pw = "AbcDef";
	cout << "input: " << pw << endl;
	cout << "Upper check: " << findUpper(pw) << endl;
	cout << "Lower check: " << findLower(pw) << endl;
	cout << "Number check: " << findNumber(pw) << endl;
	cout << "Special check: " << findSpecial(pw) << endl;
	cout << "PW check: " << checkPwCombi(pw) << endl;
	cout << endl;

	return 0;
}