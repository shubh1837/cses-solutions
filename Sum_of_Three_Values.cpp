#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,x;
	cin>>n>>x;
	if(n<3)
	{
		cout<<"IMPOSSIBLE";
		return 0;
	}
	vector<vector<int>> v(n,vector<int>(2));
	for(int i=0;i<n;i++)
	{
		cin>>v[i][0];
		v[i][1]=i;
	}
	sort(v.begin(),v.end(),[](vi& a,vi&b)
	{
		return a[0]<b[0];
	});
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1];nl;
	// }
	for(int i=0;i<n-2;i++)
	{
		if(v[i][0]+v[i+1][0]+v[i+2][0]>x)
		{
			break;
		}
		if(v[i][0]+v[n-1][0]+v[n-2][0]<x)
		{
			// f=false;
			continue;
		}
		int j=i+1,k=n-1;
		while(j<k)
		{
			if(v[i][0]+v[j][0]+v[k][0]<x)
			{
				j++;
			}
			else if(v[i][0]+v[j][0]+v[k][0]>x)
			{
				k--;
			}
			else
			{
				cout<<v[i][1]+1<<" "<<v[j][1]+1<<" "<<v[k][1]+1;
				return 0;
			}
		}


	}
	cout<<"IMPOSSIBLE";
	

}