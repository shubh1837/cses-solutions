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
	int res=0;
	for(int i=5;n/i>=1;i*=5)
	{
		res+=n/i;
	}
	cout<<res;
}