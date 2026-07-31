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
	vi s(n);
	for(auto &x:s)cin>>x;
	sort(s.begin(),s.end());
    int m=s[n/2];
    int t=0;
    fr(i,n)
    {
    	t+=(abs(m-s[i]));
    }
    cout<<t;
    
	
}