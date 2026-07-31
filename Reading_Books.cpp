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
	fr(i,n)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	
	int s=accumulate(v.begin(),v.end()-1,0LL);
	int l=v[n-1];
	if(l<=s)
	{
		cout<<s+l;
	}
	else
	{
		cout<<2*l;
	}

}