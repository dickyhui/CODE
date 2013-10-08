#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string check(char* input);
int mainpat1003()
{
	int n;
	cin >> n;
	while (n--)
	{
		char input[100];
		cin >> input;
		cout<<check(input)<<endl;
	}

	return 0;
}
string check(char* input)
{

	char left[100] = {0};
	char middle[100] = { 0 };
	char right[100] = { 0 };
	int l = 0, m = 0, r = 0;
	while ('A' == *input)
	{
		left[l++] = *input++;
	}
	if('P'!=*input++) return "NO";
	while ('A' == *input)
	{
		middle[m++] = *input++;
	}
	if ('T' != *input++) return "NO";
	while ('\0' != *input)
	{
		right[r++] = *input++;
	}
	
	if (0!=m&&((l == 0 && r == 0 )|| l*m == r))
	{
		return "YES";
	}
	else
	{
		return "NO";
	}
}