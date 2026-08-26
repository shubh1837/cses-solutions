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

int32_t main() {
    
    int a,b;
    cin>>a>>b;
    
    vector<vi> dp(a,vi(b,0));
    fr(i,a)
    {
        fr(j,b)
        {
            if(i==j)
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
            else 
            {
                int m=INT_MAX;
                for(int k=0;k<=j/2;k++)
                {
                    m=min(m,1+dp[i][j-k-1]+dp[i][k]);
                }
                for(int k=0;k<=i/2;k++)
                {
                    m=min(m,1+dp[i-k-1][j]+dp[k][j]);
                }
                dp[i][j]=m;
            }

        }
    }
    // fr(i,a)
    // {
    //     fr(j,b)
    //     {
    //         cout<<dp[i][j]<<" ";
    //     }nl;
    // }
    cout<<dp[a-1][b-1];

}