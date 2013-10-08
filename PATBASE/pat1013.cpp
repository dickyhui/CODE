#include"stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

bool IsPrime(int n);

int mainpat1013()
{
	int n,m;
	cin >> n>>m;
	int i = 2, count = 0, out = 0;
	bool b = false;
	while (count<m)
	{
		if (IsPrime(i))
		{
			count++;
			if (count >= n)
			{
				if (b)
				{
					if (out % 10 == 0)
						cout << endl;
					else
						cout << " ";
				}
				else
				{
					b = true;
				}
				cout << i;
				out++;
			}
			
		}
		i++;
	}
	return 0;
}
bool IsPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

}