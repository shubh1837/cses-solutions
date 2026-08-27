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
    int n;
    cin>>n;
    vi v(n);
    int s=0;
    fr(i,n)
    {
    	cin>>v[i];
    	s+=v[i];
    }

    vector<bool> dp(s+1,false);
    dp[0]=true;
    int c=0;
    fr(i,n)
    {
    	for(int j=s;j>0;j--)
    	{
    		if(i==0)
    		{
    			dp[v[i]]=true;
    			c++;
    			break;
    		
    		}
    		if(dp[j]==false&&j>=v[i]&&dp[j-v[i]]==true)
    		{
    			dp[j]=true;	
    			c++;
    		}
    	}
    }
    cout<<c;nl;
    for(int i=1;i<=s;i++)
    {
    	if(dp[i])
    	{
    		cout<<i<<" ";
    	}
    }




    // ordered_set s;
    // fr(i,n)
    // {
    // 	ordered_set sf;
    // 	sf.insert(v[i]);
    // 	for(auto it=s.begin();it!=s.end();it++)
    // 	{
    // 		sf.insert(*it+v[i]);
    // 	}
    // 	for(auto it=sf.begin();it!=sf.end();it++)
    // 	{
    // 		s.insert(*it);
    // 	}

    // }
    // cout<<s.size();nl;
    // for(auto it=s.begin();it!=s.end();it++)
    // {
    // 	cout<<*it<<" ";
   	// }


}