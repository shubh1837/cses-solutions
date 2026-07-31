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
	vi a(n);
	fr(i,n)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int i=0,j=n-1,t=0;
	while(i<j)
	{
		if(a[i]+a[j]<=x)
		{
			t++;
			i++;
			j--;
		}
		else
		{
			t++;
			j--;
		}
	}
	if(i==j)
	{
		t++;
	}
	cout<<t;
}