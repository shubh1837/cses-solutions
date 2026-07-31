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
	fr(i,n)
	{
		int a,b;
		cin>>a>>b;
		int x=abs(a-b);
		x=(min(a,b)-x);
		if(x>=0&&x%3==0)
		{
			cout<<"YES";
		}
		else
		{
			cout<<"NO";
		}nl;
	}
}