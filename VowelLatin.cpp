
#line 3 "VowelLatin.cpp"
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

using namespace std;
class VowelLatin {
	public:
	string translate(string word) {
	string f,l;
	for(int i=0;i<word.length();i++)
	{
		if(word[i]=='a'|| word[i]=='A' || word[i]=='e' || word[i]=='E' || word[i]=='i' || word[i]=='I' || word[i]=='o' || word[i]=='O' || word[i]=='u' || word[i]=='U')
			l+=word[i];

		else
			f+=word[i];

	}

	return (f+l);
	}
};
