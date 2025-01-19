#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>>s;
	int Scnt=0;

	for(int i=0;i<s.length();i++)
	{
		if(int(s[i])>90)
		{
			Scnt++;
		}	
	}
	
	int Bcnt=s.length()-Scnt;
	if(Bcnt<=Scnt)
	{
		for(auto& i:s)
		{
		i=tolower(i);
        }
	}
	else
	{
		for(auto& i:s)
		{
		i=toupper(i);
        }
	}
	cout<<s;
	return 0;
}