#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,m;
	cin>>n>>m;
	multiset<int> h;
	fr(i,n)
	{
		int p;
		cin>>p;
		h.insert(p);
	}
	// sort(h.begin(),h.end());
	// sort(t.begin(),t.end());
	// fr(i,n)
	// {
	// 	cout<<h[i]<<" ";
	// }nl;
	// fr(i,m)
	// {
	// 	cout<<t[i]<<" ";
	// }nl;
	fr(i,m)
	{
		int th;
		cin>>th;
		auto it=h.upper_bound(th);
		if(it==h.begin())
		{
			cout<<-1;nl;
		}
		else
		{
			it--;
			cout<<*it;nl;
			h.erase(it);
		}
		
	}

}