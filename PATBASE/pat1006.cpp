#include"stdafx.h"
#include<iostream>
using namespace std;

int mainpat1006()
{
	int bcount = 0, scount = 0, n;
	int input;
	cin >> input;
	bcount = input / 100;
	scount = (input % 100) / 10;
	n = input % 10;
	while (bcount-- != 0)
	{
		cout << "B";
	}
	while (scount-- != 0)
	{
		cout << "S";
	}
	int i = 1;
	while (n-- != 0)
	{
		cout << i++;
	}

	return 0;
}