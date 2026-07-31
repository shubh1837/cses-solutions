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
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++)
	{
		cin>>v[i][0]>>v[i][1];
	}
	sort(v.begin(),v.end(),[](vi& a,vi& b)
	{
		if(a[0]==b[0])
		{
			return a[1]<b[1];
		}
		return a[0]<b[0];
	});
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1];nl;
	// }
	int sum=0;
	int c=0;
	for(int i=0;i<n;i++)
	{
		c+=v[i][0];
		sum+=(v[i][1]-c);
	}
	cout<<sum;
}