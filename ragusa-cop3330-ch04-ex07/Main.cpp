#include <iostream>
#include <sstream>
#include "Header.h"
using namespace std;

int main()
{
	cout << "Enter two numbers and the desired operation: ";
	string a;
	string b;
	int A=0;
	int B=0;
	char x;
	cin >> a;
	cin >> b;
	cin >> x;
	
	a = findNum(a);
	b = findNum(b);
	int result = {};


	if (a == "Error" || b=="Error")
	{
		cout << "Number not between 0 and 9.";

	}
	else
	{
		stringstream convert(a);
		stringstream convert2(b);

		convert >> A;
		convert2 >> B;
		if (x == '/' && B == 0)
		{
			cout << "Cannot divide by zero.";
		}
		else
		{
			result = calc(x, A, B);
			cout << result;
		}
	}

}
int calc(char x, int a, int b)
{
	if (x == '+')
	{
		return a + b;

	}
	if (x == '-')
	{
		return a - b;
	}
	if (x == '*')
	{
		return a * b;
	}
	if (x == '/')
	{
		return a / b;
	}


}
string findNum(string a)
{
	if (a == "zero" || a == "Zero" || a=="0")
	{
		return "0";
	}
	if (a == "one" || a == "One" || a=="1")
	{
		return "1";
	}
	if (a == "two" || a == "Two" || a=="2")
	{
		return "2";
	}
	if (a == "three" || a == "Three" || a=="3")
	{
		return "3";
	}
	if (a == "four" || a == "Four" || a=="4")
	{
		return "4";
	}
	if (a == "five" || a == "Five" || a=="5")
	{
		return "5";
	}
	if (a == "six" || a == "Six" || a=="6")
	{
		return "6";
	}
	if (a == "seven" || a == "Seven" || a=="7")
	{
		return "7";
	}
	if (a == "eight" || a == "Eight" || a=="8")
	{
		return "8";
	}
	if (a == "nine" || a == "Nine" || a == "9")
	{
		return "9";
	}
	else
		return "Error";
	


}