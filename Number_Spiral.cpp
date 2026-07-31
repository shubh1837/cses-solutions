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
		if(a==b)
		{
			cout<<a*(a-1)+1;nl;
		}
		else if(a>b)
		{
			cout<<((a&1)?((a-1)*(a-1)+b):(a*a-b+1));nl;
		}
		else
		{
            cout<<((b&1)?(b*b-a+1):((b-1)*(b-1)+a));nl;		
        }
	}
	
}