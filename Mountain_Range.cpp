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
    vi v(n+2,0),o(n+2);
    o[0]=0;
    o[n+1]=n+1;
    fr(i,n)
    {
        cin>>v[i+1];
        o[i+1]=i+1;

        // cout<<v[i+1]<<" "<<o[i+1];nl;
    }
    vi l(n+2),r(n+2);
    l[0]=r[0]=l[n+1]=r[n+1]=0;
    stack<int> s;
    for(int i=1;i<n+1;i++)
    {
        while(!s.empty()&&v[s.top()]<v[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            l[i]=0;
        }
        else
        {
            l[i]=s.top();
        }
        s.push(i);
    }
    s=stack<int>();
    for(int i=n;i>=1;i--)
    {
        while(!s.empty()&&v[s.top()]<=v[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            r[i]=n+1;
        }
        else
        {
            r[i]=s.top();
        }
        s.push(i);
    }
    // fr(i,n)
    // {
    //     cout<<v[i+1]<<" "<<o[i+1]<<" "<<l[i+1]<<" "<<r[i+1];nl;

    // }
    sort(o.begin()+1,o.end()-1,[&](int a, int b)
    {
        if(v[a]!=v[b])
        {
            return v[a]>v[b];
        }
        return a<b;
    });
    // fr(i,n+2)
    // {
    //     cout<<v[i]<<" "<<o[i];nl;
    // }
    vi dp(n+2,0);
    for(int j=1;j<=n;j++)
    {
        int i=o[j];
        int left=l[i];
        int right=r[i];
        // cout<<v[i]<<" "<<i<<" "<<left<<" "<<right;nl;
        if(v[i]==v[left])
        {
            dp[i]=dp[left];
        }
        else
        {
            dp[i]=max(dp[left],dp[right])+1;
        }
    //     fr(i,n+2)
    // {
    //     cout<<dp[i]<<" ";
    // }nl;
    }
    
    cout<<*max_element(dp.begin(),dp.end());


}