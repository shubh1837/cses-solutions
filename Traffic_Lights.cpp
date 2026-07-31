#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int x,n;
	cin>>x>>n;
	vi a(n);
	for(auto&x:a)cin>>x;
	// for(auto&x:a)cout<<x;	
	set< pair<int,int> > m;
    m.insert({0,x});
    multiset<int> l;
    l.insert(x);
    // int start=0,end=n;
    fr(i,n)
    {
    	auto it=m.upper_bound({a[i],0});
    	it--;
    	int s=it->first;
    	int e=it->second;
    	m.erase(it);
    	l.erase(l.find(e-s));
    	m.insert({s,a[i]});
    	m.insert({a[i],e});
    	l.insert(a[i]-s);
    	l.insert(e-a[i]);
    	cout<<*l.rbegin()<<" ";
    	
    }
		
	
}