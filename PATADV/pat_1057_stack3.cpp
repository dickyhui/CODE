#include "stdafx.h"
#include<assert.h>
#include<iostream>
#include<set>
#include<stack>
#include<cstring>
using namespace std;

int arrmap[100001] = { 0 };
int arrstack[100001] = { 0 };
int arrcount = 0;

int main1057stack3()
{
	int count;
	cin >> count;
	char* inputstr = new char[20];
	while (count-- > 0)
	{
		scanf("%s", inputstr);
		if (strcmp(inputstr, "PeekMedian") == 0)
		{
			if (arrcount == 0)
			{
				printf("Invalid\n");
			}
			else
			{
				int median = (arrcount + 1) / 2;
				int currentcount = 0;
				int i = 1;
				for (; currentcount < median; i++)
				{
					currentcount += arrmap[i];
				}
				printf("%d\n", i-1);
			}
		}
		else if (strcmp(inputstr, "Pop") == 0)
		{
			if (arrcount == 0)
			{
				printf("Invalid\n");
			}
			else
			{
				int num = arrstack[--arrcount];
				printf("%d\n", num);
				arrmap[num]--;
			}
		}
		else if (strcmp(inputstr, "Push") == 0)
		{
			int num;
			scanf("%d", &num);
			arrstack[arrcount++] = num;
			arrmap[num]++;
		}
		else
		{
			assert(false);
		}
	}
	return 0;
}