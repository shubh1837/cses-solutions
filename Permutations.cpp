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
	if(n==1)
	{
		cout<<1;nl;
	}
	else if(n==2||n==3)
	{
		cout<<"NO SOLUTION";nl;
	}
	else
	{
		fr(i,n/2)
		{
			cout<<2*(i+1)<<" ";
		}
		fr(i,ceil((1.0*n)/2))
		{
			cout<<2*i+1<<" ";
		}
	}
}