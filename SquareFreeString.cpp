
#line 3 "SquareFreeString.cpp"
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
struct SquareFreeString 
{
	string isSquareFree(string s)
	{
	
		
		int l = s.length();

		for(int i=1;i<=l;i++)
		for(int j=0;i+j<l;j++)
			
		if(s.substr(j,i) == s.substr(j+i,i))
					return "not square-free";
				
			
		

		return "square-free";
























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
		cout << "Testing SquareFreeString (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1477581508;
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
		SquareFreeString _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string s = "bobo";
				_expected = "not square-free";
				_received = _obj.isSquareFree(s); break;
			}
			case 1:
			{
				string s = "apple";
				_expected = "not square-free";
				_received = _obj.isSquareFree(s); break;
			}
			case 2:
			{
				string s = "pen";
				_expected = "square-free";
				_received = _obj.isSquareFree(s); break;
			}
			case 3:
			{
				string s = "aydyamrbnauhftmphyrooyq";
				_expected = "not square-free";
				_received = _obj.isSquareFree(s); break;
			}
			case 4:
			{
				string s = "qwertyuiopasdfghjklzxcvbnm";
				_expected = "square-free";
				_received = _obj.isSquareFree(s); break;
			}
			/*case 5:
			{
				string s = ;
				_expected = ;
				_received = _obj.isSquareFree(s); break;
			}*/
			/*case 6:
			{
				string s = ;
				_expected = ;
				_received = _obj.isSquareFree(s); break;
			}*/
			/*case 7:
			{
				string s = ;
				_expected = ;
				_received = _obj.isSquareFree(s); break;
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
