
#line 3 "FuelConsumption.cpp"
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
struct FuelConsumption 
{
	double maximalDistance(vector <int> velocities, vector <int> consumptions, int fuel)
	{
		
		double ans=0,var=0;

		for(int i=0;i<velocities.size();i++){

			var=(double)(fuel)/(double)consumptions[i] *(double) velocities[i]	;
			ans=max(ans,var);
		}

		return ans;

















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
		cout << "Testing FuelConsumption (250.0 points)" << endl << endl;
		for (int i = 0; i < 20; i++)
		{
			ostringstream s; s << argv[0] << " " << i;
			int exitCode = system(s.str().c_str());
			if (exitCode)
				cout << "#" << i << ": Runtime Error" << endl;
		}
		int T = time(NULL)-1497334581;
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
		FuelConsumption _obj;
		double _expected, _received;
		time_t _start = clock();
		switch (_tc)
		{
			case 0:
			{
				int velocities[] = {100};
				int consumptions[] = {10000};
				int fuel = 10000;
				_expected = 100.0;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			case 1:
			{
				int velocities[] = {70, 80, 90, 100, 60, 110};
				int consumptions[] = {4000, 4000, 4000, 4000, 4000, 4000};
				int fuel = 40000;
				_expected = 1100.0;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			case 2:
			{
				int velocities[] = {250, 240, 230, 220, 210, 211};
				int consumptions[] = {5000, 4500, 4000, 3500, 3000, 3000};
				int fuel = 50000;
				_expected = 3516.6666666666665;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			case 3:
			{
				int velocities[] = {5, 10, 20, 40, 80};
				int consumptions[] = {1000, 2500, 6250, 9000, 18000};
				int fuel = 47832;
				_expected = 239.16;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			case 4:
			{
				int velocities[] = {5, 10, 20, 40, 80, 160};
				int consumptions[] = {1000, 2500, 6250, 8000, 9500, 20000};
				int fuel = 47832;
				_expected = 402.79578947368424;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			case 5:
			{
				int velocities[] = {240, 195, 130, 133, 15, 160, 111, 206, 72, 149,
				                    146, 115, 235, 183, 102, 96, 163, 61, 196, 52,
				                    87, 139, 33, 7, 90, 67, 118, 227, 197, 114};
				int consumptions[] = {14837, 2981, 17292, 18591, 4832, 7461, 17991, 18369, 18291, 9400,
				                      15179, 3317, 2595, 2441, 6936, 8028, 14973, 18981, 12503, 7816,
				                      2883, 6385, 6230, 18157, 16567, 9310, 2866, 4687, 14171, 4477};
				int fuel = 31710;
				_expected = 2871.6184971098264;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}
			/*case 6:
			{
				int velocities[] = ;
				int consumptions[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}*/
			/*case 7:
			{
				int velocities[] = ;
				int consumptions[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}*/
			/*case 8:
			{
				int velocities[] = ;
				int consumptions[] = ;
				int fuel = ;
				_expected = ;
				_received = _obj.maximalDistance(vector <int>(velocities, velocities+sizeof(velocities)/sizeof(int)), vector <int>(consumptions, consumptions+sizeof(consumptions)/sizeof(int)), fuel); break;
			}*/
			default: return 0;
		}
		cout.setf(ios::fixed,ios::floatfield);
		cout.precision(2);
		double _elapsed = (double)(clock()-_start)/CLOCKS_PER_SEC;
		if (abs(_expected-_received) < 1e-9 || (_received > min(_expected*(1.0-1e-9), _expected*(1.0+1e-9)) && _received < max(_expected*(1.0-1e-9), _expected*(1.0+1e-9))))
			cout << "#" << _tc << ": Passed (" << _elapsed << " secs)" << endl;
		else
		{
			cout << "#" << _tc << ": Failed (" << _elapsed << " secs)" << endl;
			cout.precision(10);
			cout << "           Expected: " << _expected << endl;
			cout << "           Received: " << _received << endl;
		}
	}
}

// END CUT HERE
