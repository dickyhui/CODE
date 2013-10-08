#include"stdafx.h"
#include<iostream>
#include<climits>
#include <iomanip>
using namespace std;

int mainpat1012()
{
	int A1 = 0, A2 = INT_MAX, A3 = 0, A4 = 0, A5 = 0;
	int n;
	scanf("%d ", &n);
	int input;
	bool a2 = true;
	int a4=0;
	for (int i = 0; i < n; i++)
	{
		cin >> input;
		if (input % 10 == 0)
		{
			A1 = A1 + input;
		}
		if (input % 5 == 1)
		{
			A2 = A2==INT_MAX?input:(A2 + (a2 ? input : -input));
			a2 = !a2;
		}
		else if (input % 5 == 2)
		{
			A3++;
		}
		else if (input % 5 == 3)
		{
			A4 = A4 + input;
			a4++;
		}
		else if (input % 5 == 4)
		{
			if (A5<input)
				A5 = input;
		}
	}
	
	if (A1 == 0)
		cout << "N"<<" ";
	else
		cout << A1 << " ";
	if (A2 == INT_MAX)
		cout << "N" << " ";
	else
		cout << A2 << " ";
	if (A3 == 0)
		cout << "N" << " ";
	else
		cout << A3 << " ";
	if (A4 == 0)
		cout << "N" << " ";
	else
		cout <<fixed<< setprecision(1) << double(A4) / a4 << " ";
	if (A5 == 0)
		cout << "N";
	else
		cout << A5;
	return 0;
}

