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
	int s=(n*(n+1))/2;
	if(s&1)
	{
		cout<<"NO";
	}
	else
	{
		s/=2;
		vi f,l;
		int sf=0;
		for(int i=n;i>0;i--)
		{
			if(sf+i<=s)
			{
				f.push_back(i);
				sf+=i;
			}
			else
			{
				l.push_back(i);
			}
		}
		cout<<"YES";nl;
		cout<<f.size();nl;
		for(int &x:f) cout<<x<<" ";
		nl;
	    cout<<l.size();nl;
		for(int &x:l) cout<<x<<" ";
		nl;
	}
}