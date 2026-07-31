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
	while(n!=1)
	{
		cout<<n<<" ";
		if(n&1)
		{
			n*=3;
			n++;

		}
		else
		{
			n/=2;
		}
	}
	cout<<1;
	nl;
}