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
	const int MOD = 1e9 + 7;
	int r=1;
	fr(i,n)
	{
		r<<=1;
		r%=MOD;
	}
	cout<<r;
}