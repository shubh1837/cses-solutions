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
	int t=0;
	set<int>s;
	vi p(n),v(n);
	fr(i,n)
	{
		int x;
		cin>>x;
		v[i]=x;
		p[x-1]=i+1;
		if(s.find(x-1)==s.end())
		{
			t++;
		}
		s.insert(x);
	}
	// cout<<t;
	while(m--)
	{
		// for(auto&x:v)cout<<x;nl;
		// for(auto&x:p)cout<<x;nl;
		int a,b;
		cin>>a>>b;
		if(a>b)
		{
			swap(a,b);
		}

		int x=v[a-1];
		int y=v[b-1];
		// cout<<x<<y;
		if(x-y==1)
		{
			t--;
		}
		if(x-y==-1)
		{
			t++;
		}
		if(x==1)
		{
			if(p[x]>a&&p[x]<b)
			{
				t++;
			}
		}
		else
		{
			if(p[x]>a&&p[x]<b)
			{
				t++;
			}
			if(p[x-2]>a&&p[x-2]<b)
			{
				t--;
			}
		}
		// cout<<t<<"x";nl;
		if(y==n)
		{
			if(p[y-2]>a&&p[y-2]<b)
			{
				t++;
			}
		}
		else
		{
			if(p[y]>a&&p[y]<b)
			{
				t--;
			}
			if(p[y-2]>a&&p[y-2]<b)
			{
				t++;
			}
		}
		cout<<t;nl;
		p[x-1]=b;
		p[y-1]=a;
		swap(v[a-1],v[b-1]);

	}
	
}