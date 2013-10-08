#include"stdafx.h"
#include<iostream>
#include<assert.h>
using namespace std;
void ExchangeSubarray(int a [], int len, int start, int end);
int mainpat1008()
{
	int n, m;
	cin >> n >> m;
	int* a = (int*)malloc(sizeof(int)*n);
	while (n < m)
	{
		m = m%n;
	}
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	ExchangeSubarray(a, n, 0, m - 1);
	ExchangeSubarray(a, n, m, n - 1);
	if (2 * m == n)
	{
		ExchangeSubarray(a, n, 0, n - 1);
	}
	else if (2 * m < n)
	{
		ExchangeSubarray(a, n, 0, 2*m - 1);
		ExchangeSubarray(a, n, 2 * m ,n-1);
	}
	else
	{
		ExchangeSubarray(a, n, 0, 2*m-n - 1);
		ExchangeSubarray(a, n, 2*m-n, n - 1);
	}

	int b = 0;
	for (int i = 0; i < n; i++)
	{
		if (b)
		{
			cout << " ";
		}
		else
		{
			b = 1;
		}
		cout << a[i];
	}
	return 0;
}

void ExchangeSubarray(int* a, int len, int start, int end)
{
	if (start > end)
		return;
	assert(end < len);
	int temp;
	for (int i = start; i < (end+start+1)/2; i++)
	{
		temp = a[i];
		a[i] = a[start+end - i];
		a[start + end - i] = temp;
	}
}