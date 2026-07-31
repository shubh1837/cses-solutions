#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,t;
	cin>>n>>t;
	vi v(n);
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	int l=1,h=t*v[0];
	int m=(l+h)/2;	
	int cp=0;
	int lm=m;
	while(l<=h)
	{
		// lm=m;
		m=(l+h)/2;
		// cout<<l<<" "<< m<<" "<<h<<" ";
		cp=0;
		for(int i=0;i<n;i++)
		{
			cp+=m/v[i];
			// if(cp<t)
			// {
			// 	continue;
			// }

		}
		// cout<<cp;nl;
		if(cp<t)
		{
			l=m+1;
		}
		else
		{
			lm=m;
			h=m-1;
		}
	}
	// nl;
	cout<<lm;
}
