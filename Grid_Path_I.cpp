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
	vector<vector<char>> s(n,vector<char>(n));
	fr(i,n)
	{
		fr(j,n)
		{
			cin>>s[i][j];
		}
	}
	vector<vi> dp(n,vi(n,0));
	fr(i,n)
	{
		fr(j,n)
		{
			if(s[i][j]=='.')
			if(i==0&&j==0)
			{
				dp[i][j]=1;
			}
			else if(i==0)
			{
				dp[i][j]=dp[i][j-1];
			}
			else if(j==0)
			{
				dp[i][j]=dp[i-1][j];
			}
			else
			{
				dp[i][j]=(dp[i-1][j]+dp[i][j-1])%1000000007;
			}
			// cout<<dp[i][j]<<" ";
		}
		// nl;
	} 
	cout<<dp[n-1][n-1];
}