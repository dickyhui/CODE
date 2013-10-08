#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int _tmainpat1004(int argc, _TCHAR* argv [])
{
	int n;
	cin >> n;
	string maxname, maxid, minname, minid, tempname, tempid;
	int maxscore, minscore,tempscore;
	cin >> maxname >> maxid >> maxscore;
	minname = maxname;
	minid = maxid;
	minscore = maxscore;
	while (--n)
	{
		cin >> tempname >> tempid >> tempscore;
		if (maxscore < tempscore)
		{
			maxname = tempname;
			maxid = tempid;
			maxscore = tempscore;
		}
		if (minscore > tempscore)
		{
			minname = tempname;
			minid = tempid;
			minscore = tempscore;
		}
	}
	cout << maxname << " " << maxid<<endl;
	cout << minname << " " << minid;

	return 0;
}