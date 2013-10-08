#include"stdafx.h"
#include<iostream>
#include<math.h>
using namespace std;

bool CheckPrime(int n);

int mainpat1007()
{
	int n;
	cin >> n;
	int count=0;
	int temp = 2;
	for (int i = 2; i <= n; i++)
	{
		if (CheckPrime(i))
		{
			if (i - 2 >= 2&&i-temp==2)
			{
				count++;
			}
			temp = i;
		}
	}
	cout << count;
	return 0;
}
bool CheckPrime(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}
	return true;

}