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
	vi a(n),b(n);
	// vector<vector<int>> t(n,vector<int>(2,0));
	// fr(i,n)
	// {
	// 	fr(j,2)
	// 	{
	// 		cin>>t[i][j];
	// 	}
	// }
	fr(i,n)
	{
		cin>>a[i]>>b[i];
	}
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	int mia=a[0],mib=b[0],maa=a[n-1],mab=b[n-1];
	// cout<<mia<<maa<<mib<<mab;nl;
	int d=mab-mia+1;
	// cout<<d;nl;
	int i=0,j=0,x,y,t=0,m=0;
	while(i<n&&j<n)
	{
		if(a[i]<=b[j])
		{
		    t++;
		    m=max(t,m);
		    i++;			
		}
		else
		{
			// m=max(t,m);
			t--;
			j++;
		}
	}
	cout<<m;







	// vi f(n,0),u(n,0);
	// int j=0;
	// for(int i=0;i<d;i++)
	// {
	// 	if(i==0)
	// 	{
	// 		f[i]=1;
	// 		j++;
	// 	}
	// 	else if(j==n)
	// 	{
	// 		f[i]=f[i-1];
	// 	}
	// 	else if(a[j]==i+mia)
	// 	{
	// 		f[i]=f[i-1]+1;
	// 		j++;
	// 	}
	// 	else
	// 	{
	// 		f[i]=f[i-1];
	// 	}
	// }
	// // fr(i,d)
	// // {
	// // 	cout<<f[i]<<" ";
	// // }nl;
	// j=0;
	// u[0]=f[0];
	// for(int i=0;i<mab-1;i++)
	// {
		
	// 	if(j==0&&b[j]!=i+mia)
	// 	{
	// 		u[i+1]=f[i+1];
	// 	}
	// 	if(b[j]==i+mia)
	// 	{
	// 		u[i+1]=u[i]-1+(f[i+1]-f[i]);
	// 		j++;
	// 	}
	// 	else
	// 	{
	// 		u[i+1]=u[i]+(f[i+1]-f[i]);
	// 	}
	// }
	// // fr(i,d)
	// // {
	// // 	cout<<f[i]<<" ";
	// // }nl;
	// // fr(i,d)
	// // {
	// // 	cout<<u[i]<<" ";
	// // }nl;
    // auto it=max_element(u.begin(),u.end());
    // cout<<u[distance(u.begin(),it)];
	

	
}