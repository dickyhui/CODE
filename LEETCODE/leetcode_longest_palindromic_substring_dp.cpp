#include"stdafx.h"
#include<string>
using namespace std;

string longestPalindromeDP(string str);
int mainlongestPalindromeDP()
{
	string palin = longestPalindromeDP("1234543678");

	return 0;
}

string longestPalindromeDP(string str)
{
	bool table[1000][1000] = {false};
	int n = str.length();
	int longest_begin = 0;
	int maxlen=1;
	for(int i=0;i<n;i++) table[i][i]=true;
	for(int i=0;i<n-1;i++)
	{
		if(str[i]==str[i+1])
		{
			table[i][i+1]==true;
			maxlen=2;
			longest_begin=i;
		}
	}
	for(int len=3;len<=n;len++)
	{
		for(int i=0;i<n-len+1;i++)
		{
			int j = i+len-1;
			if(str[i]==str[j]&&table[i+1][j-1]==true)
			{
				table[i][j]=true;
				maxlen=len;
				longest_begin=i;
			}
		}
	}
	return str.substr(longest_begin,maxlen);

}