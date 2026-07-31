#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,m,k;
	cin>>n>>m>>k;
	vi a(n),b(m);
	fr(i,n)
	{
		cin>>a[i];
	}
	fr(i,m)
	{
		cin>>b[i];
	}
	
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	// fr(i,n)
	// {
	// 	cout<<a[i]<<" ";
	// }nl;
	// fr(i,m)
	// {
	// 	cout<<b[i]<<" ";
	// }nl;
	int i=0,j=0;
	int t=0;
	while(i<n&&j<m)
	{
		if(abs(a[i]-b[j])<=k)
		{

			i++;j++;t++;
		}
		else if(a[i]<b[j])
		{
			i++;
		}
		else
		{
			j++;
		}
	}
	cout<<t;
	
}