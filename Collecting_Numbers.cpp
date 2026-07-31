#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n;
	cin>>n;
	int t=0;
	set<int>s;
	fr(i,n)
	{
		int x;
		cin>>x;
		if(s.find(x-1)==s.end())
		{
			t++;
		}
		s.insert(x);
	}
	cout<<t;	
}