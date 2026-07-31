#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"


int min_diff(int cur,vector<int>& a,int sum1,int sum2,int n)
{
	if(cur==n)
	{
		return abs(sum1-sum2);
	}
	else
	{
		int ch1=min_diff(cur+1,a,sum1+a[cur],sum2,n);
		int ch2=min_diff(cur+1,a,sum1,sum2+a[cur],n);
		return min(ch1,ch2);
	}
}

int32_t main()
{
	int n;
	cin>>n;
	vi a(n);
	for(int &x:a) {cin>>x;}

    cout<<min_diff(0,a,0,0,n);
}