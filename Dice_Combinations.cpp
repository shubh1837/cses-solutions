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
	v[0]=1;
	for(int i=1;i<n;i++)
	{
		for(int j=i-1;j>=0&&j>=i-6;j--)
		{
			v[i]+=v[j];
		}
		if(i<6)
		{
			v[i]++;
		}
		v[i]%=1000000007;
	}
	cout<<v[n-1];
}