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
    vi v(n);
    for(auto& x:v)cin>>x;
    vi dp(n,0);
    int lc=1;
    int f=1;
    int mod=1000000007;
    sort(v.begin(),v.end());
    for(int i=1;i<n;i++)
    {
        if(v[i]=v[i-1])
        {
            lc=(f+1)%mod;
        }
        f+=lc;
        f%=mod;
        // cout<<f;nl;
    }
    cout<<f;
    
}