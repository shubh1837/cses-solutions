#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,m;
	cin>>n>>m;
	vi v(n);
	fr(i,n)
	{
		cin>>v[i];
	}
	vector<vi> dp(n,vi(m+2,0));
	if(v[0]==0)
	{
		for(int j=1;j<=m;j++)
		{
			dp[0][j]=1;
		}
	}
	else
	{
		dp[0][v[0]]=1;
	}
	for(int i=1;i<n;i++)
	{
		
		if(v[i]!=0)
		{
			dp[i][v[i]]=(dp[i-1][v[i]-1]+dp[i-1][v[i]]+dp[i-1][v[i]+1])%1000000007;
	
			continue;
		}
		for(int j=1;j<=m;j++)
		{
			dp[i][j]=(dp[i-1][j-1]+dp[i-1][j]+dp[i-1][j+1])%1000000007;

		}
		
	}
	// fr(l,n)
	// 	{
	// 		fr(o,m+2)
	// 		{
	// 			cout<<dp[l][o]<<" ";
	// 		}nl;
	// 	}
	int ans=0;
	for(int i=1;i<=m;i++)
	{
		ans=(ans+dp[n-1][i])%1000000007;
	}
	cout<<ans;

	
}