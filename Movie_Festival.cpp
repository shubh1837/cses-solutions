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
	vector<vector<int>> mt(n,vi (2));
	fr(i,n)
	{
		cin>>mt[i][0]>>mt[i][1];
	}
	sort(mt.begin(),mt.end(),[](const vector<int>& a,const vector<int>b){
		return a[1]<b[1];
	});
	int t=1;
	int end=mt[0][1];
	for(int i=1;i<n;i++)
	{
		if(mt[i][0]>=end)
		{
			t++;
			end=mt[i][1];
		}
	}
	cout<<t;
}