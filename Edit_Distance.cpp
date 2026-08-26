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
    
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size();
    int n2=s2.size();
    vector<vi> dp(n2+1,vi(n1+1,0));
    for(int i=0;i<=n2;i++)
    {
    	fr(j,n1+1)
    	{
            if(i==0&&j==0)
            {
                dp[i][j]=0;
            }
    		else if(i==0)
    		{
    			dp[i][j]=j;
    		}
            else if(j==0)
            {
                
                dp[i][j]=i;
                
            }
    		else if(s1[j-1]==s2[i-1])
    		{
    			dp[i][j]=dp[i-1][j-1]; 
    			
    		}
            else
            {
                dp[i][j]=min(dp[i-1][j-1],min(dp[i-1][j],dp[i][j-1]))+1; 
            }
    	}
    }
    // fr(i,n2+1)
    // {        fr(j,n1+1)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }nl;
    // }
    cout<<dp[n2][n1];
    
}