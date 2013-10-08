#include"stdafx.h"
#include<iostream>
using namespace std;

int mainpat1010()
{
	int n, m;
	bool b = 1,space=0;
	do
	{
		cin >> n >> m;
		if (m != 0)
		{
			if (space)
			{
				cout << " ";
			}
			else
			{
				space = 1;
			}
			cout << n*m << " " << m - 1;
			b = 0;
		}
		
	} 
	while (getchar() != '\n');

	if (b)
	{
		cout << "0 0";
	}
	

	return 0;
}
