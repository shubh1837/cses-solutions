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
	for(int i=1;i<=n;i++)
	{
		cout<<(i*i*(i*i-1))/2-4*(i-1)*(i-2);nl;
	}
}