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
	int t=0;
	vi a(n);
	for(auto &x:a)cin>>x;
	multiset<int>s;
	for(int i=0;i<n;i++)
	{
		// cout<<a[i]<<" ";
		auto it=s.upper_bound(a[i]);
		// cout<<*it<<" ";
		if(it!=s.end())
		{
			s.erase(it);			

		}
		// cout<<"t"<<t;nl;
		s.insert(a[i]);
		// cout<<s.size()<<" ";	
		// for(auto &x:s)cout<<x<<" ";nl;

	}
	cout<<s.size();	
}