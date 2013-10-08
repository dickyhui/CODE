#include"stdafx.h"
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

typedef struct varstudent
{
	int id;
	int de;
	int cai;
}student;

bool compare(student s1, student s2);
int mainpat1015()
{
	vector<student> v1;
	vector<student> v2;
	vector<student> v3;
	vector<student> v4;
	int n, low, high;
	cin >> n >> low >> high;
	student temp;
	while (n--)
	{
		cin >> temp.id >> temp.de >> temp.cai;
		if (temp.de < low || temp.cai < low) continue;
		if (temp.de >= high && temp.cai >= high)
		{
			v1.push_back(temp);
		}
		else if (temp.de >= high)
		{
			v2.push_back(temp);
		}
		else if (temp.de >= temp.cai)
		{
			v3.push_back(temp);
		}
		else
		{
			v4.push_back(temp);
		}
	}

	sort(v1.begin(), v1.end(), compare);
	sort(v2.begin(), v2.end(), compare);
	sort(v3.begin(), v3.end(), compare);
	sort(v4.begin(), v4.end(), compare);

	cout << v1.size() + v2.size() + v3.size() + v4.size();
	for (vector<student>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		printf("\n%d %d %d", (*i).id, (*i).de, (*i).cai);
		//cout << endl << (*i).id << " " << (*i).de << " " << (*i).cai;
	}
	for (vector<student>::iterator i = v2.begin(); i != v2.end(); i++)
	{
		printf("\n%d %d %d", (*i).id, (*i).de, (*i).cai);
		//cout << endl << (*i).id << " " << (*i).de << " " << (*i).cai;
	}
	for (vector<student>::iterator i = v3.begin(); i != v3.end(); i++)
	{
		printf("\n%d %d %d", (*i).id, (*i).de, (*i).cai);
		//cout << endl << (*i).id << " " << (*i).de << " " << (*i).cai;
	}
	for (vector<student>::iterator i = v4.begin(); i != v4.end(); i++)
	{
		printf("\n%d %d %d", (*i).id, (*i).de, (*i).cai);
		//cout << endl << (*i).id << " " << (*i).de << " " << (*i).cai;
	}

	return 0;
}

bool compare(student s1, student s2)
{
	if ((s1.de + s1.cai) != (s2.de + s2.cai))
		return (s1.de + s1.cai) > (s2.de + s2.cai);
	else if (s1.de != s2.de)
		return s1.de > s2.de;
	else
		return s1.id < s2.id;
}