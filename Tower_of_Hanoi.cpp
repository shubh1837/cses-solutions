#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"


void moves(int n,int c,int t)
{
	if(n==1)
	{
		cout<<c<<" "<<t;nl;
	}
	else
	{

		t=(t==3?(c==1?2:1):(t==2?(c==1?3:1):(c==2?3:2)));
		moves(n-1,c,t);
		t=(t==3?(c==1?2:1):(t==2?(c==1?3:1):(c==2?3:2)));
		cout<<c<<" "<<t;nl;
		c=(t==3?(c==1?2:1):(t==2?(c==1?3:1):(c==2?3:2)));
		moves(n-1,c,t);
	}
}

int32_t main()
{
	int n;
	cin>>n;
	cout<<(1<<n)-1;nl;
	moves(n,1,3);
}