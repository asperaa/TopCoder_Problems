
#line 3 "TireRotation.cpp"
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
struct TireRotation 
{
	int getCycle(string initial, string current)
	{


		for(int i=1;i<=4;i++)
		{
			if(initial==current)
				return i;

			string s=initial;
			s[0]=initial[3];
			s[1]=initial[2];
			s[2]=initial[0];
			s[3]=initial[1];

			initial=s;

		}

		return -1;







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
		cout << "Testing TireRotation (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1476759132;
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
		TireRotation _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string initial = "ABCD";
				string current = "ABCD";
				_expected = 1;
				_received = _obj.getCycle(initial, current); break;
			}
			case 1:
			{
				string initial = "ABCD";
				string current = "DCAB";
				_expected = 2;
				_received = _obj.getCycle(initial, current); break;
			}
			case 2:
			{
				string initial = "ABCD";
				string current = "CDBA";
				_expected = 4;
				_received = _obj.getCycle(initial, current); break;
			}
			case 3:
			{
				string initial = "ABCD";
				string current = "ABDC";
				_expected = -1;
				_received = _obj.getCycle(initial, current); break;
			}
			case 4:
			{
				string initial = "ZAXN";
				string current = "XNAZ";
				_expected = 4;
				_received = _obj.getCycle(initial, current); break;
			}
			/*case 5:
			{
				string initial = ;
				string current = ;
				_expected = ;
				_received = _obj.getCycle(initial, current); break;
			}*/
			/*case 6:
			{
				string initial = ;
				string current = ;
				_expected = ;
				_received = _obj.getCycle(initial, current); break;
			}*/
			/*case 7:
			{
				string initial = ;
				string current = ;
				_expected = ;
				_received = _obj.getCycle(initial, current); break;
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
