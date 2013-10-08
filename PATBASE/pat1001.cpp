#include"stdafx.h"
#include <stdio.h>

int times=0;
void CalCutTimes(int in);

int mainpat1001()
{
	int in;
	scanf("%d",&in);
	CalCutTimes(in);
	printf("%d",times);
	return 0;
}

void CalCutTimes(int in)
{
	if(in==1)
	{
		return;
	}
	else if(in%2==0)
	{
		in /= 2;
	}
	else
	{
		in = (in*3+1)/2;
	}
	times++;
	CalCutTimes(in);
}