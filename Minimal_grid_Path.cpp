#include <bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define int long long
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

#define ordered_set_triple tree<tuple<char, int, int>, null_type, less<tuple<char, int, int>>, rb_tree_tag, tree_order_statistics_node_update>


#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main() {
    int n;
    cin>>n;
    string s[n];
    fr(i,n)
    {
        cin>>s[i];
    }
    vector<pair<int,int>> q,f;
    q.push_back({0,0});
    string ans;
    ans+=s[0][0];
    int x=2*(n-1);
    vector<vector<bool>> vs(n,vector<bool>(n,true));
    while(x--)
    {
        char mi='Z'+1;
        for(auto& it:q)
        {
            int i=it.first;
            int j=it.second;
            if(j<n-1)
            {
                mi=min(mi,s[i][j+1]);
            }
            if(i<n-1)
            {
                mi=min(mi,s[i+1][j]);
            }
        }
        // cout<<mi;nl;
        ans+=mi;
        f.clear();
        
        for(auto& it:q)
        {
            int i=it.first;
            int j=it.second;
            if(j<n-1&&s[i][j+1]==mi&&vs[i][j+1])
            {
                f.push_back({i,j+1});
                vs[i][j+1]=false;
            }
            if(i<n-1&&s[i+1][j]==mi&&vs[i+1][j])
            {
                f.push_back({i+1,j});
                vs[i+1][j]=false;
            }
        }
        q.swap(f);
        // cout<<ans;nl;

    }
    cout<<ans;
    


}