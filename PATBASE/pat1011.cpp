#include"stdafx.h"
#include<iostream>
using namespace std;


bool check(int a,int b,int c);
int mainpat1011()
{
	int n,i=1;
	cin >> n;
	while (n--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		int temp = a;
		if (a > b) {
			temp = a;
			a = b;
			b = temp;
		}

		bool bl = check(a, b, c);
		cout << "Case #" << i << ": " << boolalpha << bl << endl;
		i++;
	}
	return 0;
}
bool check(int a, int b, int c)
{
	if (b > c)
		if (a >= 0)
			return true;
		else
			if (c < 0)
				return b > c - a;
			else
				return a + b > c;
	else
		if (a <= 0)
			return false;
		else
			return b > c - a;
}