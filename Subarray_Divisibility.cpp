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
	vi v(n);
	cin>>v[0];
	v[0]%=n;

	if(v[0]<0)
	{
		v[0]=n+v[0];
	}
	// cout<<v[0]<<"\t";
	for(int i=1;i<n;i++)
	{
		cin>>v[i];
		v[i]+=v[i-1];
		v[i]%=n;
		if(v[i]<0)
	    {
		    v[i]=n+v[i];
	    }
		// cout<<v[i]<<"\t";
	}

	map<int,int> m;
	m[0]=1;
	int c=0;
	for(int i=0;i<n;i++)
	{
		// cout<<i<<" ";
		auto it=m.find(v[i]);
		if(it!=m.end())
		{
			// cout<<v[i]-x<<" "<<m[v[i]-x];
			c+=m[v[i]];

		}
		
			// cout<<" "<<v[i]<<" "<<m[v[i]]<<" ";
		m[v[i]]+=1;
			// cout<<" "<<v[i]<<" "<<m[v[i]]<<" ";

		// cout<<" "<<c;
		// nl;

	}
	cout<<c;
	
}