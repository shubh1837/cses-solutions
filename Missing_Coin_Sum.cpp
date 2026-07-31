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
	vi c(n);
	for(auto &x:c)cin>>x;
	sort(c.begin(),c.end());
// for(auto &x:c)cout<<x;
    int s=0;
    for(int i=0;i<n;i++)
    {
    	// cout<<s;nl;
    	if((s+1)>=c[i])
    	{
    		s+=c[i];
    	}
    	else
    	{
    		cout<<++s;
    		return 0;
    	}
    }
    cout<<++s;
}