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
	int x=n;
	vi v(n);
	vi res;
	fr(i,n)
	{
		v[i]=1;
	}
	if(n==1)
	{
		cout<<1;
		return 0;
	}
	bool f=true;
	while(x)
	{
		// for(int e:v)
		// {
		// 	cout<<e<<" ";
		// }nl;
		
		for(int i=0;i<n;i++)
		{
			if(x==n&&i==0)
			{
				continue;
			}
			if(v[i]==0)
			{
				continue;
			}
			if(f)
			{
				cout<<i+1<<" ";
				v[i]=0;
				x--;

			}
			f=!f;
		}
	}
}