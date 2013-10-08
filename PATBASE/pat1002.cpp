#include"stdafx.h"
#include<stdio.h>
#include<stdlib.h>

int sum = 0;
void CalSum(char *in);
void CalPY(char *stringnum,char *result);
int mainpat1002()
{
	char in[100] = {0};
	scanf("%s",in);
	CalSum(in);

	char stringnum[100]={'\0'};
	//itoa(sum,stringnum,10);
	sprintf(stringnum,"%d",sum);
	char result[100]={'\0'};
	CalPY(stringnum,result);

	printf("%s",result);

	return 0;
}

void CalSum(char *in)
{
	while(*in != '\0')
	{
		sum += *in++ - '0';
	}
}

void CalPY(char *stringnum,char *result)
{
	if(*stringnum == '\0')
	{
		result[-1]='\0';
		return;
	}
	switch(*stringnum)
	{
	case '0':
		result[0]='l';
		result[1]='i';
		result[2]='n';
		result[3]='g';
		result[4]=' ';
		result+=5;
		break;
	case '1':
		result[0]='y';
		result[1]='i';
		result[2]=' ';
		result+=3;
		break;
	case '2':
		result[0]='e';
		result[1]='r';
		result[2]=' ';
		result+=3;
		break;
	case '3':
		result[0]='s';
		result[1]='a';
		result[2]='n';
		result[3]=' ';
		result+=4;
		break;
	case '4':
		result[0]='s';
		result[1]='i';
		result[2]=' ';
		result+=3;
		break;
	case '5':
		result[0]='w';
		result[1]='u';
		result[2]=' ';
		result+=3;
		break;
	case '6':
		result[0]='l';
		result[1]='i';
		result[2]='u';
		result[3]=' ';
		result+=4;
		break;
	case '7':
		result[0]='q';
		result[1]='i';
		result[2]=' ';
		result+=3;
		break;
	case '8':
		result[0]='b';
		result[1]='a';
		result[2]=' ';
		result+=3;
		break;
	case '9':
		result[0]='j';
		result[1]='i';
		result[2]='u';
		result[3]=' ';
		result+=4;
		break;
	}
	stringnum++;
	CalPY(stringnum,result);
}