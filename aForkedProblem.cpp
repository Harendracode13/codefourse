/*
Lunchbox is done with playing chess! His queen and king just got forked again!

In chess, a fork is when a knight attacks two pieces of higher value, commonly the king and the queen. Lunchbox knows that knights can be tricky, and in the version of chess that he is playing, knights are even trickier: instead of moving 1 tile in one direction and 2 tiles in the other, knights in Lunchbox's modified game move a tiles in one direction and b tiles in the other.

Lunchbox is playing chess on an infinite chessboard which contains all cells (x,y) where x and y are (possibly negative) integers. Lunchbox's king and queen are placed on cells (xK,yK) and (xQ,yQ) respectively. Find the number of positions such that if a knight was placed on that cell, it would attack both the king and queen.

Input
Each test contains multiple test cases. The first line contains an integer t (1≤t≤1000) — the number of test cases. The description of the test cases follows.

The first line of each test case contains two integers a and b (1≤a,b≤10^8) — describing the possible moves of the knight.

The second line of each test case contains two integers xK and yK (0≤xK,yK≤10^8) — the position of Lunchbox's king.

The third line in a test case contains xQ and yQ (0≤xQ,yQ≤108) — the position of Lunchbox's queen.

It is guaranteed that Lunchbox's queen and king will occupy different cells. That is, (xK,yK)≠(xQ,yQ).

Output
For each test case, output the number of positions on an infinite chessboard such that a knight can attack both the king and the queen.
*/

#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
		int a,b;
		cin>>a>>b;

		int xK,yK;
		cin>>xK>>yK;

		int xQ,yQ;
		cin>>xQ>>yQ;

		vector<pair<int,int>> dir={{a,b},{a,-b},{-a,b},{-a,-b},
		                            {b,a},{b,-a},{-b,a},{-b,-a}};
		
		
		set<pair<int,int>> st1,st2;

		for(auto d:dir)
		{
			int x=xK+d.first;
			int y=yK+d.second;

			st1.insert(make_pair(x,y));

			x=xQ+d.first;
			y=yQ+d.second;

			st2.insert(make_pair(x,y));
		}
		int ans=0;
		for(auto pos:st1)
		{
			if(!(st2.find(pos)==st2.end()))
			{
				ans++;
			}
		}
		cout<<ans<<endl;	

}
return 0;
}