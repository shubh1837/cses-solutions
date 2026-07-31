#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,x;
	cin>>n>>x;
	vi v(n);
	fr(i,n)
	{
		cin>>v[i];
	}
	// fr(i,n)
	// {
	// 	cout<<v[i]<<" ";
	// }nl;
	int sum=0;
	int l=-1,c=0;
	bool f=true;
	for(int i=0;i<n;i++)
	{
		if(l==-1)
		{
			if(v[i]<x)
			{
				l=i;
				sum+=v[i];
			}
			else if(v[i]==x)
			{
				l=i;
				sum+=v[i];
				c++;
			}
		}
		else
		{
			if(f)
			sum+=v[i];
			if(sum==x)
			{
				f=true;
				c++;
			}
			else if(sum>x&&sum!=v[l])
			{
				f=false;
				sum-=v[l];
				l++;
				i--;
			}
			else
			{
				f=true;
			}
		}
		// cout<<c<<" "<<l<<" "<<i<<" "<<sum;nl;
	}
	cout<<c;
	
}