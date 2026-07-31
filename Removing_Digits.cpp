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
	vi dp(n+1,0);
	fr(i,n+1)
	{
		if(i<10)
		{
			dp[i]=1;
			continue;
		}
		int j=i;
		int md=0;
		while(j)
		{
			md=max(md,j%10);
			j/=10;
		}
		dp[i]=dp[i-md]+1;
		// cout<<md<<" ";

	}
	cout<<dp[n];
}