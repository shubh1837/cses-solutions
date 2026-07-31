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
	vi a(n);
	int s=0;
	for(int &x:a) cin>>x;
	for(int i=1;i<n;i++)
	{
		if(a[i-1]>a[i])
		{
			s+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
	}
	cout<<s<<endl;
	
}