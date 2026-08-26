#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
#define mod 1000000007
int32_t main()
{
	int n;
	cin>>n;
	vi v(n);
	v[0]=1;
	// for(int i=1;i<n;i++)
	// {
	// 	for(int j=i-1;j>=0&&j>=i-6;j--)
	// 	{
	// 		v[i]+=v[j];
	// 	}
	// 	if(i<6)
	// 	{
	// 		v[i]++;
	// 	}
	// 	v[i]%=1000000007;
	// }
	for(int i=1;i<n;i++)
	{
		v[i]=(v[i-1]*2)%mod;
		if(i==6)
		{
			v[i]--;
		}
		else if(i>6)
		{
			v[i]=(v[i]+mod-v[i-7])%mod;
		}
	}
	cout<<v[n-1];
}