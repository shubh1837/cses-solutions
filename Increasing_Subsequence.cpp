#include <bits/stdc++.h>
using namespace std;


// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
#define int long long
// #define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>

// #define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define inverse_2 (int)500000004
#define mod 1000000007

int32_t main() {
    int n;
    cin>>n;
    vi v(n);
    fr(i,n)
    {
    	cin>>v[i];
    }
    vi a(n,1000000001);
    a[0]=v[0];
    for(int i=1;i<n;i++)
    {
    	// cout<<a.size()<<" ";nl;
    	// for(int j=0;j<n;j++)
        // {
		//     cout<<a[j]<<" ";
	    // }nl;
    	int lb=0;
    	int ub=n;
        // cout<<ub;nl;
        int mid;
    	int x;
    	while(lb<=ub)
    	{
    		mid=(lb+ub)/2;
    		if(v[i]<a[mid])
    		{
    			ub=mid-1;
    		}
    		else if(v[i]>a[mid])
    		{
    			lb=mid+1;
    		}
    		else
    		{
    			x=mid;
                break;
    		}
    		x=ub+1;

    	}

    	// cout<<lb<<" "<<mid<<" "<<ub;nl;
    	a[x]=v[i];
    	
    }
    int z=0;
    for(int j=0;j<a.size();j++)
    {
        if(a[j]!=1000000001)
        {
            z++;
        }
		// cout<<a[j]<<" ";
	}
    // nl;
    cout<<z;

}