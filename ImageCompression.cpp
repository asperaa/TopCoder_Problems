
#line 3 "ImageCompression.cpp"
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
struct ImageCompression 
{
	string isPossible(vector <string> image, int k)
	{
		

















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
		cout << "Testing ImageCompression (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1498304102;
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
		ImageCompression _obj;
		string _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string image[] = {
				                 "0011",
				                 "0011",
				                 "1100",
				                 "1100",
				                 "0000",
				                 "0000"
				                 };
				int k = 2;
				_expected = "Possible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			case 1:
			{
				string image[] = {
				                 "0011",
				                 "0011",
				                 "1100",
				                 "1100",
				                 "0010",
				                 "0000"
				                 };
				int k = 2;
				_expected = "Impossible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			case 2:
			{
				string image[] = {
				                 "111000111",
				                 "111000111",
				                 "111000111"
				                 };
				int k = 3;
				_expected = "Possible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			case 3:
			{
				string image[] = {
				                 "001100",
				                 "001100",
				                 "110011",
				                 "110011",
				                 "001100",
				                 "001100"
				                 };
				int k = 6;
				_expected = "Impossible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			case 4:
			{
				string image[] = {
				                 "001100",
				                 "001100",
				                 "110011",
				                 "110011",
				                 "001100",
				                 "001100"
				                 };
				int k = 2;
				_expected = "Possible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			case 5:
			{
				string image[] = {
				                 "11111111",
				                 "11111111",
				                 "11111111",
				                 "11111111",
				                 "11111111",
				                 "11111111",
				                 "11111111",
				                 "11111111"
				                 };
				int k = 4;
				_expected = "Possible";
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}
			/*case 6:
			{
				string image[] = ;
				int k = ;
				_expected = ;
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}*/
			/*case 7:
			{
				string image[] = ;
				int k = ;
				_expected = ;
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
			}*/
			/*case 8:
			{
				string image[] = ;
				int k = ;
				_expected = ;
				_received = _obj.isPossible(vector <string>(image, image+sizeof(image)/sizeof(string)), k); break;
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
