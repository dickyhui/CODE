#include"stdafx.h"
#include<string>
using namespace std;

string longestPalindromeCenter(string str);
string longestPalin(string str,int i,int j);

int mainlongestPalindromeCenter()
{
	string palin = longestPalindromeCenter("1234543678");

	return 0;
}

string longestPalindromeCenter(string str)
{
	int n = str.length();

	string result="";
	for(int i=0;i<n;i++)
	{
		string temp = longestPalin(str,i,i);
		if(temp.length()>result.length())
		{
			result = temp;
		}
	}
	for(int i=0;i<n-1;i++)
	{
		string temp = longestPalin(str,i,i+1);
		if(temp.length()>result.length())
		{
			result = temp;
		}
	}
	return result;
}

string longestPalin(string str,int i,int j)
{
	int n = str.length();
	while(i>=0&&j<n&&str[i]==str[j])
	{
		i--;
		j++;
	}
	return str.substr(i+1,j-i-1);
}