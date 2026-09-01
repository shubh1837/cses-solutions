#include <bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define inverse_2 (int)500000004
#define mod 1000000007

int32_t main() {
    int n;
    cin>>n;
    vector<vi> v(n+1,vi(3));
    v[0][0]=v[0][1]=v[0][2]=0;
    fr(i,n)
    {
    	cin>>v[i+1][0]>>v[i+1][1]>>v[i+1][2];
    }
    sort(v.begin(),v.end(),[](vi& a,vi& b)
    {
    	return a[1]<b[1];
    });
    // fr(i,n+1)
    // {
    // 	cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2];nl;
    // }
    vi dp(n+1,0);
    // fr(i,n+1)
    // {
    // 	cout<<dp[i]<<" ";
    // }nl;
    dp[1]=v[1][2];
    // fr(i,n+1)
    //     {
    //         cout<<dp[i]<<" ";
    //     }nl;
    for(int i=2;i<=n;i++)
    {
        int lb=0;
        int ub=i-1;
        int mid;
        int x;
        while(lb<=ub)
        {
            mid=(lb+ub)/2;
            if(v[i][0]<v[mid][1])
            {
                ub=mid-1;
            }
            else if(v[i][0]>v[mid][1])
            {
                lb=mid+1;
            }
            else
            {
                x=mid-1;
                break;
            }
            x=ub;
        }
    	// cout<<v[i][0]<<" ";
    	
    	// cout<<x<<" ";nl;
    	dp[i]=v[i][2]+dp[x];
        // if(v[i][1]==v[i-1][1])
        dp[i]=max(dp[i-1],dp[i]);

    	// fr(i,n+1)
    	// {
    	// 	cout<<dp[i]<<" ";
    	// }nl;
    }
    cout<<*max_element(dp.begin(),dp.end());
}