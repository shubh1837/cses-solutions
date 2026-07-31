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
	int t=1<<n;
	vector<vector<int>> m(t,vector<int>(n));
	
	fr(i,n)
	{
		int x=(1<<(i+1))-1;
		int y=1<<i,z=0;
		for(int j=0;j<t;j++)
		{
			if(y!=0)
			{
				m[j][i]=z;
				y--;
			}
			else
			{
				z=(z?0:1);
				m[j][i]=z;
				y=x;
				// cout<<"y="<<y;nl;
			}

		}
	}
	for(int i=0;i<t;i++)
	{
		for(int j=n-1;j>=0;j--)
		{
			cout<<m[i][j];
		}nl;
	}
}