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
	vi a(n),b(n);
	fr(i,n)
	{
		cin>>a[i];
		b[i]=a[i];
	}
	sort(a.begin(),a.end());
	int i=0,j=n-1;
	int z,y;
	while(i!=j)
	{
		if(a[i]+a[j]==x)
		{
			y=a[i];
			z=a[j];
			break;
		}
		else if(a[i]+a[j]>x)
		{
			j--;
		}
		else
		{
			i++;
		}

	}
	// cout<<y<<z;nl;
	int p1=-1,p2=-1;
	if(i==j)
	{
		cout<<"IMPOSSIBLE";
		return 0;
	}
	for(int k=0;k<n;k++)
	{
		if(y==b[k]&&p1==-1)
		{
			p1=k+1;

		}
		if(z==b[k]&&p1!=k+1)
		{
			p2=k+1;
		}
		if(p1!=-1&&p2!=-1)
		{
			break;
		}

	}
	cout<<p1<<" "<<p2;
	
}