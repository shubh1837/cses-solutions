#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	string s;
	cin>>s;
	int n=s.size();
	int m=1,x=1;
	for(int i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
		{
			x++;
		}
		else
		{
			if(m<x)
			{
				m=x;

			}x=1;
		}
	}
	if(m<x)
			{
				m=x;

			}
	cout<<m;nl;
	
}