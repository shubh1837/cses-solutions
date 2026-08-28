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
    int s=(n*(n+1))/2;
    // cout<<s;nl;
    if(s&1)
    {
    	cout<<0;
    	return 0;
    }
    s=s/2;
    // cout<<s;nl;
    vi v(n),dp(s+1);
    dp[0]=1;
    for(int j=1;j<=n;j++){
    for(int i=s;i>=j;i--)
    {
    	dp[i]=(dp[i]+dp[i-j])%mod;
    }
    // fr(i,s)
    // {
    // 	cout<<dp[i]<<" ";
    // }nl;
    }
    cout<<(dp[s]*inverse_2)%mod;

}