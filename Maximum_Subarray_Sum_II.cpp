#include <bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>




#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,a,b;
	cin>>n>>a>>b;
	vi v(n);
	cin>>v[0];
	// cout<<v[0]<<" ";nl;
	for(int i=1;i<n;i++)
	{
	    cin>>v[i];
	    v[i]+=v[i-1];
	    	// cout<<v[i]<<" ";nl;
	}
	// nl;
	ordered_multiset om;
	int m=v[a-1];
	// int y=0;
	int b1=0;
	// fr(i,a)
	// {
        // om.insert(v[a-1]);
        // cout<<v[a-1]<<" ";
	// }
	// cout<<m;nl;
	for(int i=a;i<n;i++)
	{
		om.insert(v[i-a]);
		if(i<b)
		{
		    int m1=*om.find_by_order(0);
			m1=min(0LL,m1);
			m=max(m,v[i]-m1);
		}
		else
		{
		    int m1=*om.find_by_order(0);
		    m=max(m,v[i]-m1);
		    auto it=om.upper_bound(v[i-b]);
			om.erase(it);
		}

		

		
		// cout<<v[i]<<" ";
		
		// cout<<m;nl;

	}
	cout<<m;


}