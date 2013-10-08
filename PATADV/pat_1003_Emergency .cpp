#include "stdafx.h"
#include<iostream>
using namespace std;

const int MAXN = 501;
int N, M, C1, C2;
int rescue_teams[MAXN] = { 0 };
int roads[MAXN][MAXN] = { 0 };
int searched_roads[MAXN] = { 0 };
int shortest_road_length = 0x7FFFFFFF;
int shortest_road_count = 0;
int max_teams = 0;

void Emergency(int c1, int c2, int teams, int road_length);

int mainemergency()
{
	cin >> N >> M >> C1 >> C2;
	int temp = 0;
	while (temp < N)
	{
		cin >> rescue_teams[temp++];
	}
	temp = 0;
	int i, j, k;
	while (temp++ < M)
	{
		cin >> i >> j >> k;
		roads[i][j] = k;
		roads[j][i] = k;
	}
	searched_roads[C1]=1;
	Emergency(C1, C2, rescue_teams[C1], 0);

	cout << shortest_road_count << " " << max_teams;
	return 0;
}

void Emergency(int c1, int c2, int teams, int road_length)
{
	if (c1 == c2)
	{
		if (road_length < shortest_road_length)
		{
			shortest_road_length = road_length;
			shortest_road_count = 1;
			max_teams = teams;
		}
		else if (road_length == shortest_road_length)
		{
			shortest_road_count++;
			if (max_teams < teams)
			{
				max_teams = teams;
			}
		}
	}
	else
	{
		for (int i = 0; i < N; i++)
		{
			if (searched_roads[i] == 0 
				&& roads[c1][i] > 0
				&& (road_length + roads[c1][i]) <= shortest_road_length)
			{
				searched_roads[i] = 1;
				Emergency(i, c2, teams + rescue_teams[i], road_length + roads[c1][i]);
				searched_roads[i] = 0;
			}
		}
	}
}