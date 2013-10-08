#include"stdafx.h"
#include<iostream>
#include<string>
using namespace std;

string GetDay(char c);
int GetHour(char c);
int mainpat1014()
{
	char a[60], b[60], c[60], d[60];
	char* ap = a, *bp = b, *cp = c, *dp = d;
	cin >> a >> b >> c >> d;
	int count = 0;
	char aa,bb;
	while (true)
	{
		aa = *ap++;
		bb = *bp++;
		if (aa == bb && aa >= 'A' && aa <= 'G')
		{
			cout << GetDay(aa)<<" ";
			break;
		}
	}
	while (true)
	{
		aa = *ap++;
		bb = *bp++;
		if (aa == bb && ((aa >= 'A' && aa <= 'N') || (aa >= '0' && aa <= '9')))
		{
			if (GetHour(aa) < 10)
				cout << 0;
			cout << GetHour(aa) << ":";
			break;
		}
	}
	while (true)
	{
		aa = *cp++;
		bb = *dp++;
		if (aa == bb && ((aa >= 'a' && aa <= 'z') || (aa >= 'A' && aa <= 'Z')))
		{
			if (count < 10)
				cout << 0;
			cout << count;
			break;
		}
		count++;
	}

	return 0;
}
string GetDay(char c)
{
	switch (c)
	{
	case 'A':
		return "MON";
	case 'B':
		return "TUE";
	case 'C':
		return "WED";
	case 'D':
		return "THU";
	case 'E':
		return "FRI";
	case 'F':
		return "SAT";
	case 'G':
		return "SUN";
	}
	return "";
}

int GetHour(char c)
{
	if (c >= '0' && c <= '9')
	{
		return c - '0';
	}
	if (c >= 'A' && c <= 'N')
	{
		return c - 'A' + 10;
	}
}