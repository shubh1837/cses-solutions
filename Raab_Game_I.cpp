#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		bool f=true;
		int n,a,b;
		cin>>n>>a>>b;
		if(n<(a+b))
		{
		    cout<<"NO";nl;
		}
		else if(a==(a+b)&&((a==0&&b==0)||(a!=0&&b!=0)))
		{
			cout<<"YES";nl;
			fr(i,n)
			{
				cout<<i+1<<" ";
			}nl;
			fr(i,n)
			{
				cout<<((i+a)%n)+1<<" ";
			}nl;
		}
		else
		{
			if((a==0&&b==0)||(a!=0&&b!=0))
			{
				cout<<"YES";nl;
				fr(i,n)
			    {
				    cout<<i+1<<" ";
			    }nl;
			    int i=0;
			    for(;i<(a+b);i++)
			    {
				    cout<<((i+a)%(a+b))+1<<" ";
			    }
			    for(;i<n;i++)
			    {
			    	cout<<i+1<<" ";
			    }nl;
			}
			else
			{
				cout<<"NO";nl;
			}
		}


	}
	
}