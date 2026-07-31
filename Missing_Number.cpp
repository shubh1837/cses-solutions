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
	vi a(n-1);
	int sum=0;
	fr(i,n-1)
	{
		cin>>a[i];
		sum+=a[i];
	}
	cout<<(n*(n+1))/2-sum;nl;

}