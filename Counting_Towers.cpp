#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    vector<vi> dp(1000000,vi(2,0));
    dp[0][0]=1;
    dp[0][1]=1;
    for(int i=1;i<1000000;i++)
    {
    	dp[i][0]=(dp[i-1][0]*4+dp[i-1][1])%1000000007;
    	dp[i][1]=(dp[i-1][0]+dp[i-1][1]*2)%1000000007;
    }
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<(dp[n-1][0]+dp[n-1][1])%1000000007;nl;
    }
    
    
}