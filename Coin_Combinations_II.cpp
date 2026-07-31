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
 
	vi dp(x+1,0);
	dp[0]=1;
	for(int i=0;i<n;i++)
	{
		// int m=INT_MAX;
		for(int j=v[i];j<=x;j++)
		{
			dp[j]=(dp[j]+dp[j-v[i]])%1000000007;
			// cout<<dp[j]<<" ";
		}
		// fr(i,x+1)
		// {
		// 	// cout<<dp[i]<<" ";
		// }
		// nl;
		// cout<<dp[i];nl;
 
		
	}
	cout<<dp[x];
 
}