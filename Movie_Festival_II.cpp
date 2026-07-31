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
	int n,k;
	cin>>n>>k;
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++)
	{
		cin>>v[i][0]>>v[i][1];
	}
	sort(v.begin(),v.end(),[](vi& a,vi& b)
	{
		if(a[0]==b[0])
		{
			return a[1]<b[1];
		}
		return a[0]<b[0];
	});
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1];nl;
	// }
	int c=0;
	ordered_multiset om;
	for(int i=0;i<n;i++)
	{
		if(om.size()<k)
		{
			om.insert(v[i][1]);
			// cout<<
			c++;
			continue;

		}
		auto its=om.begin();
		auto ite=om.rbegin();
		if(v[i][0]>=*its)
		{
			c++;
			om.erase(its);
			om.insert(v[i][1]);

		}
		else if(v[i][1]<*ite)
		{
			om.erase(ite);
			om.insert(v[i][1]);
		}
	}
	cout<<c;

}