#include "stdafx.h"
#include<assert.h>
#include<iostream>
#include<queue>
#include<stack>
#include<cstring>
#include<functional>
using namespace std;

priority_queue<int, vector<int>, greater<int>> pq;
stack<int> stacktemp;
stack<int>  sta;

int main1057stack()
{
	int count;
	cin >> count;
	char* inputstr = new char[20];
	while (count-- > 0)
	{
		scanf("%s",inputstr);
		if (strcmp(inputstr, "PeekMedian")==0)
		{
			if (sta.empty())
			{
				printf("Invalid\n");
			}
			else
			{
				int temp;
				int median = (pq.size()+1)/2;
				while (--median)
				{
					temp = pq.top();
					stacktemp.push(temp);
					pq.pop();
				}
				printf("%d\n", pq.top());
				while (!stacktemp.empty())
				{
					temp = stacktemp.top();
					stacktemp.pop();
					pq.push(temp);
				}
			}
		}
		else if (strcmp(inputstr, "Pop") == 0)
		{
			int num,temp;
			if (sta.empty())
			{
				printf("Invalid\n");
			}
			else
			{
				num = sta.top(); 
				sta.pop();
				printf("%d\n",num);
				while (num != pq.top())
				{
					temp = pq.top();
					stacktemp.push(temp);
					pq.pop();
				}
				pq.pop();
				while (!stacktemp.empty())
				{
					temp = stacktemp.top();
					stacktemp.pop();
					pq.push(temp);
				}
			}
		}
		else if (strcmp(inputstr, "Push") == 0)
		{
			int num;
			scanf("%d", &num);
			sta.push(num);

			pq.push(num);
		}
		else
		{
			assert(false);
		}
	}
	return 0;
}