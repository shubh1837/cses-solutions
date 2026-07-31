#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,x;
	cin>>n>>x;
	vi v(n);
	fr(i,n)
	{
		cin>>v[i];
	}
	// sort(v.begin(),v.end());
	// fr(i,n)
	// {
	// 	cout<<v[i];nl;
	// }
	vi dp(x+1,INT_MAX);
	dp[0]=0;
	for(int i=1;i<=x;i++)
	{
		// int m=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(v[j]<=i&&dp[i-v[j]]!=INT_MAX)
			{
				dp[i]=min(dp[i],dp[i-v[j]]+1);
			}
			// cout<<m<<" ";
		}
		
	}
	if(dp[x]!=INT_MAX)
	{
		cout<<dp[x];

	}
	else
	{
		cout<<-1;
	}
	
}