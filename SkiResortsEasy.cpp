
#line 3 "SkiResortsEasy.cpp"
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
#include<cmath>
#include<cstdio>

using namespace std;
struct SkiResortsEasy 
{
	int minCost(vector <int> altitude)
	{
		int price=0,key=altitude[0];
		for(int i=1;i<altitude.size();i++)
		{
			
			if(altitude[i]>key){
				
				price+=altitude[i]-key;
				altitude[i]=key;
			}
				key=altitude[i];
			


		}

		return price;

















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
		cout << "Testing SkiResortsEasy (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1497280782;
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
		SkiResortsEasy _obj;
		int _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int altitude[] = {30, 20, 20, 10};
				_expected = 0;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}
			case 1:
			{
				int altitude[] = {5, 7, 3};
				_expected = 2;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}
			case 2:
			{
				int altitude[] = {6, 8, 5, 4, 7, 4, 2, 3, 1};
				_expected = 6;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}
			case 3:
			{
				int altitude[] = {749, 560, 921, 166, 757, 818, 228, 584, 366, 88};
				_expected = 2284;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}
			case 4:
			{
				int altitude[] = {712, 745, 230, 200, 648, 440, 115, 913, 627, 621, 186, 222, 741, 954, 581, 193, 266, 320, 798, 745};
				_expected = 6393;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}
			/*case 5:
			{
				int altitude[] = ;
				_expected = ;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}*/
			/*case 6:
			{
				int altitude[] = ;
				_expected = ;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
			}*/
			/*case 7:
			{
				int altitude[] = ;
				_expected = ;
				_received = _obj.minCost(vector <int>(altitude, altitude+sizeof(altitude)/sizeof(int))); break;
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
