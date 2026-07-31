#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;

#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>

// #define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n;
	cin>>n;
	vector<vector<int>> v(n,vector<int>(3));
	// vector<vector<int>> v1(n,vector<int>(2));

	for(int i=0;i<n;i++)
	{
		cin>>v[i][0];
		// v1[i][0]=v[i][0];
		cin>>v[i][1];
		// v1[i][1]=v[i][1];
		v[i][2]=i;
	}

    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        if(a[0]==b[0])
        {
        	return a[1] > b[1];
        }
        return a[0] < b[0];
    });
    // for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" ";
	// 	cout<<v[i][1]<<" "<<v[i][2]<<" ";
    //     // cout<<c2[i];
	// 	nl;
	// }
	ordered_multiset s;
	// map<int,int> m;
    vector<int> c1(n,0),c2(n,0);
    // int ma=0,mi=2e9;
    for(int i=n-1;i>=0;i--)
    {

    	// if(v[i][1]>=mi)
    	// {
    	// 	auto itend=m.upper_bound(v[i][1]);
    	// 	for(auto it=m.begin();it!=itend;it++)
    	// 	{
    	// 		// cout<<it->first<<" "<<it->second;nl;
    	// 		c1[v[i][2]]+=it->second;
    	// 	}
    	// }
    	// mi=min(mi,v[i][1]);
    	// if(m.find(v[i][1])==m.end())
    	// {
    	// 	m[v[i][1]]=1;
    	// }
    	// else
    	// m[v[i][1]]++;
    	int lb=s.order_of_key(v[i][1]+1);
    	c1[v[i][2]]=lb;
    	s.insert(v[i][1]);
    	
    }
    // map<int,int>m1;
    ordered_multiset s1;
    for(int i=0;i<n;i++)
    {
    // 	if(v[i][1]<=ma)
    // 	{
    // 		// cout<<"yes\n";
    // 		auto itend=m1.lower_bound(v[i][1]);
    // 		for(auto it=itend;it!=m1.end();it++)
    // 		{
    // 			// cout<<it->first<<" "<<it->second;nl;
    // 			c2[v[i][2]]+=it->second;
    // 		}
    // 	}
    // 	ma=max(ma,v[i][1]);
    // 	if(m1.find(v[i][1])==m1.end())
    // 	{
    // 		m1[v[i][1]]=1;
    // 	}
    // 	else
    // 	m1[v[i][1]]++;
    	int lb=s1.order_of_key(v[i][1]);
    	c2[v[i][2]]=s1.size()-lb;
    	s1.insert(v[i][1]);
    }
    for(int e:c1)
    {
    	cout<<e<<" ";
    }nl;
    for(int e:c2)
    {
    	cout<<e<<" ";
    }nl;
	

}