#include"stdafx.h"
#include<stack>
#include<iostream>
#include<string>
using namespace std;

int mainpat1009()
{
	stack<string> stack_string;
	string str;
	do
	{
		cin >> str;
		stack_string.push(str);
	} 
	while (getchar() != '\n');
	bool b = 0;
	while (!(stack_string.empty()))
	{
		if (b)
			cout << " ";
		else
			b = 1;
		cout<<stack_string.top();
		stack_string.pop();
	}

	return 0;
}