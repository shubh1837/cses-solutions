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
	vector<vi> v(n,vi(2));
	fr(i,n)
	{
		cin>>v[i][0];
	}
	fr(i,n)
	{
		cin>>v[i][1];
	}
	// sort(v.begin(),v.end(),[](vi& a,vi& b)
	// 	{
	// 		if(a[0]==b[0])
	// 		{
	// 			return a[1]<b[1];
	// 		}
	// 		return a[0]<b[0];
	// 	});
    
	// fr(i,n)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1];nl;
	// }
	vi dp(x+1,0);
	// for(int i=1;i<=x;i++)
	// {
	// 	for(int j=0;j<n;j++)
	// 	{
	// 		dp[i]=max(dp[i],dp[i-1]);
	// 		// if(i<v[j][0])
	// 		// {
				
	// 		// 	// cout<<v[j][0]<<" < ";
	// 		// 	break;
	// 		// }
	// 		// else
	// 		// {
	// 		if(i-v[j][0]>=0)
	// 		dp[i]=max(dp[i],dp[i-v[j][0]]+v[j][1]);
	// 			// cout<<dp[i]<<" ";
	// 		// }
	// 	}
	// 	fr(j,x+1)
	// 	{
	// 		cout<<dp[j]<<" ";
	// 	}nl;
	// 	cout<<i<<" "<<dp[i];nl;
	// }
	fr(i,n)
	{
		for(int j=x;j>0;j--)
		{
			// if(i==0)
			// {
			// 	dp[j]=v[0][1];
			// 	continue;
			// }
			if(j>=v[i][0])
			    dp[j]=max(dp[j],dp[j-v[i][0]]+v[i][1]);
		    else
		    {
		    	continue;
		    } 
		}
		// fr(j,x+1)
		// {
		// 	cout<<dp[j]<<" ";
		// }nl;
	}
	cout<<dp[x];
}