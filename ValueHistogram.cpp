
#line 3 "ValueHistogram.cpp"
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
struct ValueHistogram 
{
	vector <string> build(vector <int> v)
	{
		vector<int>d(10,0);
		
		for(int i=0;i<v.size();i++)
			d[v[i]]++;
		
		int maxx=d[0];
		
		for(int i=0;i<10;i++)
			maxx=max(maxx,d[i]);

		vector<string>s(maxx+1,string(10,'.'));

		for(int j=0;j<10;j++)
		{
			for(int i=0;i<d[j];i++)
			{
				s[maxx-i][j]='X';
			}
		}

		return s;










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
		cout << "Testing ValueHistogram (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1477128347;
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
		ValueHistogram _obj;
		vector <string> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int values[] = {2, 3, 5, 5, 5, 2, 0, 8};
				string __expected[] = {"..........", ".....X....", "..X..X....", "X.XX.X..X." };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}
			case 1:
			{
				int values[] = {9, 9, 9, 9};
				string __expected[] = {"..........", ".........X", ".........X", ".........X", ".........X" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}
			case 2:
			{
				int values[] = {6, 4, 0, 0, 3, 9, 8, 8};
				string __expected[] = {"..........", "X.......X.", "X..XX.X.XX" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}
			case 3:
			{
				int values[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
				string __expected[] = {"..........", "XXXXXXXXXX" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}
			case 4:
			{
				int values[] = {6, 2, 3, 3, 3, 7, 8, 1, 0, 9, 2, 2, 4, 3};
				string __expected[] = {"..........", "...X......", "..XX......", "..XX......", "XXXXX.XXXX" };
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}
			/*case 5:
			{
				int values[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int values[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int values[] = ;
				string __expected[] = ;
				_expected = vector <string>(__expected, __expected+sizeof(__expected)/sizeof(string));
				_received = _obj.build(vector <int>(values, values+sizeof(values)/sizeof(int))); break;
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
			cout << "           Expected: {";
			for (unsigned i = 0; i < _expected.size(); i++)
			{
				if (i) cout << ",";
				cout << " \"" << _expected[i] << "\"";
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " \"" << _received[i] << "\"";
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
