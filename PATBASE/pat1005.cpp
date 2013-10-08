#include"stdafx.h"
#include<iostream>
using namespace std;
const int COUNT = 10000;
const int SIZE = 100;
int mainpat1005()
{
	int n,i,cu=0;
	cin >> n;
	int a[COUNT] = { 0 };
	int input[SIZE] = { 0 };
	while (n--)
	{
		cin >> i;
		input[cu++] = i;
		a[i] = 1;
	}
	for (int j = 0; j < cu; j++)
	{
		int k = input[j];
		if (a[k] == 0) continue;
		while (k != 1)
		{
			if (k % 2 == 1)
			{
				k = (3*k + 1) / 2;
				a[k] = 0;
			}
			else
			{
				k = k / 2;
				a[k] = 0;
			}
		}
	}
	int b = 0;
	int out;
	for (int j = 0; j < COUNT; j++)
	{
		out = COUNT - j - 1;
		if (a[out] == 1)
		{
			if (b)
			{
				cout << " ";
			}
			else
			{
				b = 1;
			}
			cout << out;
		}
	}

	return 0;
}