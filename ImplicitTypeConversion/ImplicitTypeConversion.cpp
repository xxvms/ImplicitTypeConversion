// ImplicitTypeConversion.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class part
{
private:
	int p;
public:
	part()
	{
		;
	}
	explicit part(int j) : p(j)
	{
		;
	}
};
void fun(part);
int main()
{
	part p1(2);
	//fun(p1);
	//fun(2);
	system("pause");
	return 0;
}
void fun(part p)
{
	;
}
