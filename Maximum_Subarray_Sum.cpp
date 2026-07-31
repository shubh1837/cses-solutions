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
	for(auto &x:a) cin>>x;
	int m=INT_MIN,s=0;
    fr(i,n)
    {
    	s+=a[i];
    	if(s<0)
    	{
    		m=max(m,s);
    		s=0;
    		
    	}
    	else
    	{
    		m=max(m,s);
    	}
    }
    cout<<m;
	
}