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
	vi a(n);
	for(auto &y:a)cin>>y;
	map<int,int> x;
    int start=0;
    // int s=0;
    int m=0;
    for(int i=0;i<n;i++)
    {
    	if(x.find(a[i])==x.end())
    	{
    		// cout<<"i ";
    		// for(const auto& it:x)cout<<it;nl;
    		x.insert({a[i],i});
    	}
    	else
    	{
            if(x[a[i]]>=start)
            {
                start=x[a[i]]+1;
            }
            x[a[i]]=i;
    		// s=x.size();
    		// m=max(m,s);
    		// x.erase(a[i]);
    		// x.insert(a[i]);
    		// cout<<"j ";
    		// for(const auto& it:x)cout<<it;nl;
    	}
        m=max(m,i-start+1);
    }
    // s=x.size();
    // m=max(m,s);
    cout<<m;nl;
}