#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,k;
	cin>>n>>k;
	vi v(n);
	int h=0;
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
		h+=v[i];
	}
	int ans;
	int l=*max_element(v.begin(),v.end());
	int m;
	while(l<=h)
	{
		m=(h+l)/2;
		int p=1;
		int cs=0;
		for(int i=0;i<n;i++)
		{
			cs+=v[i];
			if(cs>m)
			{
				p++;
				cs=v[i];
			}
		}
		if(p<=k)
		{
			ans=m;
			h=m-1;
		}
		else
		{
			l=m+1;
		}
	}
	cout<<ans;

	
}