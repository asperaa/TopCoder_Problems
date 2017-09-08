
#line 3 "Substitute.cpp"
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
struct Substitute 
{
	int getValue(string key, string code)
	{
		map<char,int>m;
		int num=0;

		for(int i=0;i<10;i++)
			m[key[i]]= (i+1)%10+1;
		
		

		for(int i=0;i<code.size();i++)
		{
			if(m[code[i]])
				num = num*10 + (m[code[i]]-1);
		}


		return num;



			
				
				
				
				
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
		cout << "Testing Substitute (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1476688396;
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
		Substitute _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string key = "TRADINGFEW";
				string code = "LGXWEV";
				_expected = 709;
				_received = _obj.getValue(key, code); break;
			}
			case 1:
			{
				string key = "ABCDEFGHIJ";
				string code = "XJ";
				_expected = 0;
				_received = _obj.getValue(key, code); break;
			}
			case 2:
			{
				string key = "CRYSTALBUM";
				string code = "MMA";
				_expected = 6;
				_received = _obj.getValue(key, code); break;
			}
			/*case 3:
			{
				string key = ;
				string code = ;
				_expected = ;
				_received = _obj.getValue(key, code); break;
			}*/
			/*case 4:
			{
				string key = ;
				string code = ;
				_expected = ;
				_received = _obj.getValue(key, code); break;
			}*/
			/*case 5:
			{
				string key = ;
				string code = ;
				_expected = ;
				_received = _obj.getValue(key, code); break;
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
