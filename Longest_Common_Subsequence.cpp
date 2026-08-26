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
    
    int n,m;
    cin>>n>>m;
    vi v1(n),v2(m);
    fr(i, n)
    {
        cin >> v1[i];
    }
    fr(i, m)
    {
        cin >> v2[i];
    }
    vector<vi> dp(m+1,vi(n+1,0));
    for(int i=1;i<=m;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		if(v1[j-1]==v2[i-1])
    		{
    			dp[i][j]=dp[i-1][j-1]+1;
    		}
    		else
    		{
    			dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
    		}

    	}
    }
    // fr(i,m+1)
    // {
    // 	fr(j,n+1)
    // 	{
    // 		cout<<dp[i][j]<<" ";
    // 	}nl;
    // }
    vi va;
    int i=m,j=n;
    while(i>=1&&j>=1)
    {
    	if(dp[i-1][j-1]==dp[i][j])
        {
            j--;
        }
        else
        {
            if(dp[i][j]>max(dp[i-1][j],dp[i][j-1]))
            {
                va.push_back(v2[--i]);

                j--;
            }
            else
            {
                if(dp[i][j]==dp[i-1][j])
                {
                    i--;
                }
                else
                {
                    j--;
                }
            }
        }
    }
    cout<<dp[m][n];nl;
    for(int i=va.size()-1;i>=0;i--)
    {
        cout<<va[i]<<" ";
    }
}