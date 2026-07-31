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
	for(int i=1;i<=x;i++)
	{
		// int m=INT_MAX;
		for(int j=0;j<n;j++)
		{
			if(v[j]<=i&&dp[i-v[j]]!=INT_MAX)
			{
				dp[i]+=dp[i-v[j]];
				dp[i]%=1000000007;
			}
			// cout<<m<<" ";
		}
		// cout<<dp[i];nl;
 
		
	}
	cout<<dp[x];
 

}