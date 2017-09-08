
#line 3 "MovingAverages.cpp"
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
struct MovingAverages 
{
	vector <int> calculate(vector <string> s, int n)
	{
		int hh=0,mm=0,ss=0;
		int l=s.size();
		vector<int>v;
		vector<int>r;

		for(int i=0;i<l;i++)
		{

				sscanf(s[i].c_str(),"%d:%d:%d",&hh,&mm,&ss);

				hh*=3600;
				mm*=60;
	
				v.push_back(hh+mm+ss);
		}


		int sum=0;
		for(int i=0;i<v.size()-n+1;i++)
		{
			sum=0;
			for(int j=i;j<i+n;j++)
				sum+=v[j];
			
			r.push_back(sum/n);
		}

		return r;
			
			





















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
		cout << "Testing MovingAverages (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1477931614;
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
		MovingAverages _obj;
		vector <int> _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				string times[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
				int n = 3;
				int __expected[] = { 4731,  4695,  4684 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
			}
			case 1:
			{
				string times[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
				int n = 1;
				int __expected[] = { 4750,  4660,  4784,  4643,  4627 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
			}
			case 2:
			{
				string times[] = {"01:19:10", "01:17:40", "01:19:44", "01:17:23", "01:17:07"};
				int n = 5;
				int __expected[] = { 4692 };
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
			}
			/*case 3:
			{
				string times[] = ;
				int n = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
			}*/
			/*case 4:
			{
				string times[] = ;
				int n = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
			}*/
			/*case 5:
			{
				string times[] = ;
				int n = ;
				int __expected[] = ;
				_expected = vector <int>(__expected, __expected+sizeof(__expected)/sizeof(int));
				_received = _obj.calculate(vector <string>(times, times+sizeof(times)/sizeof(string)), n); break;
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
				cout << " " << _expected[i];
			}
			cout << " }" << endl;
			cout << "           Received: {";
			for (unsigned i = 0; i < _received.size(); i++)
			{
				if (i) cout << ",";
				cout << " " << _received[i];
			}
			cout << " }" << endl;
		}
	}
}

// END CUT HERE
