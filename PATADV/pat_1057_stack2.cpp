#include "stdafx.h"
#include<assert.h>
#include<iostream>
#include<set>
#include<stack>
#include<cstring>
using namespace std;

multiset<int> seti;
stack<int>  stacki;

int main1057satck2()
{
	int count;
	cin >> count;
	char* inputstr = new char[20];
	while (count-- > 0)
	{
		scanf("%s", inputstr);
		if (strcmp(inputstr, "PeekMedian") == 0)
		{
			if (stacki.empty())
			{
				printf("Invalid\n");
			}
			else
			{
				int median = (stacki.size() + 1) / 2;
				multiset<int>::iterator i = seti.begin();
				for (int j = 1; j < median; i++, j++);
				printf("%d\n",*i);
			}
		}
		else if (strcmp(inputstr, "Pop") == 0)
		{
			int num, temp;
			if (stacki.empty())
			{
				printf("Invalid\n");
			}
			else
			{
				num = stacki.top();
				stacki.pop();
				printf("%d\n", num);
				
				int cnt = seti.count(num);
				seti.erase(num);
				while (--cnt)
				{
					seti.insert(num);
				}
			}
		}
		else if (strcmp(inputstr, "Push") == 0)
		{
			int num;
			scanf("%d", &num);
			stacki.push(num);
			seti.insert(num);
		}
		else
		{
			assert(false);
		}
	}
	return 0;
}