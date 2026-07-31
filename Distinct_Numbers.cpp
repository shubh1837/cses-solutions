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
	fr(i,n)
	{
		cin>>a[i];
	}
	sort(a.begin(),a.end());
	int t=1;
	fr(i,n-1)
	{
		if(a[i]!=a[i+1])
		{
			t++;
		}
	}
	cout<<t;

}