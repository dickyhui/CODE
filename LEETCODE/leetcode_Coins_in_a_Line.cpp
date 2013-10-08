#include"stdafx.h"
#include<iostream>
using namespace std;

const int MAX_N = 100;
void MaxMoney(int *arr, int len);

int main()
{
	int arr [] = { 3, 2, 2, 3, 1, 2 };
	int len = sizeof(arr) / sizeof(arr[0]);
	MaxMoney(arr,len);
	return 0;
}
void MaxMoney(int *arr, int len)
{
	int P[MAX_N][MAX_N] = { 0 };

	for (int l = 0; l < len; l++)
	{
		P[l][l] = arr[l];
	}

	for (int l = 1; l < len; l++)
	{
		for (int i = 0,j=l; j < len; i++,j++)
		{
			int sum = 0;
			for (int k=i; k <= j; k++)
			{
				sum += arr[k];
			}
			P[i][j] = sum - (P[i + 1][j] < P[i][j - 1] ? P[i + 1][j] : P[i][j - 1]);
		}
	}
	cout << P[0][len - 1]<<endl;
}
