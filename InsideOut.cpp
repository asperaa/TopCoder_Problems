
#line 3 "InsideOut.cpp"
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
struct InsideOut 
{
	string unscramble(string line)
	{
		reverse(line.begin(),line.begin()+line.size()/2);
		reverse(line.begin()+line.size()/2,line.end());

		return line;
			

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
		cout << "Testing InsideOut (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1476888849;
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
		InsideOut _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string line = "I ENIL SIHTHSIREBBIG S";
				_expected = "THIS LINE IS GIBBERISH";
				_received = _obj.unscramble(line); break;
			}
			case 1:
			{
				string line = "LEVELKAYAK";
				_expected = "LEVELKAYAK";
				_received = _obj.unscramble(line); break;
			}
			case 2:
			{
				string line = "H YPPAHSYADILO";
				_expected = "HAPPY HOLIDAYS";
				_received = _obj.unscramble(line); break;
			}
			case 3:
			{
				string line = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
				_expected = "MLKJIHGFEDCBAZYXWVUTSRQPON";
				_received = _obj.unscramble(line); break;
			}
			case 4:
			{
				string line = "RUT OWT SNEH HCNERF EERHTEGDIRTRAP A DNA  SEVODELT";
				_expected = "THREE FRENCH HENS TWO TURTLEDOVES  AND A PARTRIDGE";
				_received = _obj.unscramble(line); break;
			}
			/*case 5:
			{
				string line = ;
				_expected = ;
				_received = _obj.unscramble(line); break;
			}*/
			/*case 6:
			{
				string line = ;
				_expected = ;
				_received = _obj.unscramble(line); break;
			}*/
			/*case 7:
			{
				string line = ;
				_expected = ;
				_received = _obj.unscramble(line); break;
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
			cout << "           Expected: " << "\"" << _expected << "\"" << endl;
			cout << "           Received: " << "\"" << _received << "\"" << endl;
		}
	}
}

// END CUT HERE
