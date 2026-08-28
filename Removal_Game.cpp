#include <bits/stdc++.h>
using namespace std;


// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define int long long
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

// #define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main() {
    int n,s=0;
    cin>>n;
    vi v(n);
    fr(i,n)
    {
    	cin>>v[i];
        s+=v[i];
    }
    vector<vi> dp(n,vi(n,INT_MIN));
    int x=n-1,y=0;
    while(y<n)
    {
    	int i=0;
    	int j=y;
    	while(i<=x)
    	{
            // cout<<x<<y<<i<<j;nl;
    		if(i==j)
    		{
    			dp[i][j]=v[i];
    		}
    		else
    		{
                dp[i][j]=max(dp[i][i]-dp[i+1][j],dp[j][j]-dp[i][j-1]);
    		}
    		i++;
    		j++;
    	}
    	x--;
    	y++;

    }
    // fr(i,n)
    // {
    // 	fr(j,n)
    // 	{
    // 		if(i<=j)
    // 		{
    // 			cout<<dp[i][j]<<"\t";
    // 		}
    // 		else
    // 		{
    // 			cout<<0<<"\t";
    // 		}
    // 	}nl;
    // }
    cout<<(s+dp[0][n-1])/2;

}