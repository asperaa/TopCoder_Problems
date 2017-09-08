#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	long long int n;
	cin>>n;

	cout<<max(max(n/10, n/100 * 10 +n%10 ),n);

	return 0;
}




