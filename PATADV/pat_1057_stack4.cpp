#include "stdafx.h"
#include<assert.h>
#include<iostream>
#include<set>
#include<stack>
#include<cstring>
#include<stack>
#include<map>
using namespace std;

int arrmap4[100001] = { 0 };
int arrmapcount4[101] = { 0 };
int arrstack4[100001] = { 0 };
int arrcount4 = 0;

int mainpat1057stack4()
{
	int count;
	cin >> count;
	char* inputstr = new char[20];
	while (count-- > 0)
	{
		scanf("%s", inputstr);
		if (strcmp(inputstr, "PeekMedian") == 0)
		{
			if (arrcount4 == 0)
			{
				printf("Invalid\n");
			}
			else
			{
				int median = (arrcount4 + 1) / 2;
				int currentcount = 0;
				int i = -1;
				for (; currentcount < median; )
				{
					i++;
					currentcount += arrmapcount4[i];
				}
				currentcount -= arrmapcount4[i];
				int j = i*1000-1;
				for (; currentcount < median; )
				{
					j++;
					currentcount += arrmap4[j];
				}
				printf("%d\n", j);
			}
		}
		else if (strcmp(inputstr, "Pop") == 0)
		{
			if (arrcount4 == 0)
			{
				printf("Invalid\n");
			}
			else
			{
				int num = arrstack4[--arrcount4];
				printf("%d\n", num);
				arrmap4[num]--;
				arrmapcount4[num / 1000]--;
			}
		}
		else if (strcmp(inputstr, "Push") == 0)
		{
			int num;
			scanf("%d", &num);
			arrstack4[arrcount4++] = num;
			arrmap4[num]++;
			arrmapcount4[num/1000]++;
		}
		else
		{
			assert(false);
		}
	}
	return 0;
}