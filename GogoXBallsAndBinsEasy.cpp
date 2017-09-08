
#line 3 "GogoXBallsAndBinsEasy.cpp"
#include<iostream>
#include<cstring>
#include<map>
#include<numeric>
#include<string>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<set>
#include<cstdio>
#include<cctype>

using namespace std;
struct GogoXBallsAndBinsEasy 
{

	int solve(vector <int> t)
	{

		vector <int>v(t.rbegin(),t.rend());
		int res=0;

		for(int i=0;i<v.size()/2;i++)
		{
			res+=v[i]-t[i];
		}

		return res;

		

		


















		







	}
};

// BEGIN CUT HERE
#include <ctime>
#include <cmath>
#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[])
{
	if (argc == 1) 
	{
		cout << "Testing GogoXBallsAndBinsEasy (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1477208378;
		double PT = T/60.0, TT = 75.0;
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		cout << endl;
		cout << "Time  : " << T/60 << " minutes " << T%60 << " secs" << endl;
		cout << "Score : " << 250.0*(.3+(.7*TT*TT)/(10.0*PT*PT+TT*TT)) << " points" << endl;
	}
	else
	{
		int _tc; istringstream(argv[1]) >> _tc;
		GogoXBallsAndBinsEasy _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int T[] = {0, 2, 5};
				_expected = 5;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}
			case 1:
			{
				int T[] = {5, 6, 7, 8};
				_expected = 4;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}
			case 2:
			{
				int T[] = {0, 1, 2, 10};
				_expected = 11;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}
			case 3:
			{
				int T[] = {1, 2, 3, 4, 5, 6, 7, 8};
				_expected = 16;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}
			/*case 4:
			{
				int T[] = ;
				_expected = ;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}*/
			/*case 5:
			{
				int T[] = ;
				_expected = ;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int T[] = ;
				_expected = ;
				_received = _obj.solve(vector <int>(T, T+sizeof(T)/sizeof(int))); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (_received == _expected)
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
