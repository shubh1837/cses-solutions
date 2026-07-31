#include <bits/stdc++.h>
using namespace std;

// macros as defined above
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,k;
	cin>>n>>k;
	ordered_set s;
	int x=n;
	fr(i,n)
	{
		s.insert(i+1);
	}
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	// bool f=true;
	int p=0;
	while(x)
	{

		p=(p+k)%x;
		auto it=s.find_by_order(p);
		cout<<*it<<" ";
		s.erase(it);
		x--;
	}
	
}