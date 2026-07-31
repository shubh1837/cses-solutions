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
	vector<vector<int>> v(n,vector<int>(3));
	// vector<vector<int>> v1(n,vector<int>(2));

	for(int i=0;i<n;i++)
	{
		cin>>v[i][0];
		// v1[i][0]=v[i][0];
		cin>>v[i][1];
		// v1[i][1]=v[i][1];
		v[i][2]=i;
	}

    sort(v.begin(), v.end(), [](const vector<int>& a, const vector<int>& b) {
        if(a[0]==b[0])
        {
        	return a[1] > b[1];
        }
        return a[0] < b[0];
    });

    vector<int> c1(n),c2(n);
    int ma=0,mi=2e9;
    for(int i=n-1;i>=0;i--)
    {
    	if(v[i][1]>=mi)
    	{
    		c1[v[i][2]]=1;
    	}
    	mi=min(mi,v[i][1]);
    }
    for(int i=0;i<n;i++)
    {
    	if(v[i][1]<=ma)
    	{
    		c2[v[i][2]]=1;
    	}
    	ma=max(ma,v[i][1]);
    }
    for(int e:c1)
    {
    	cout<<e<<" ";
    }nl;
    for(int e:c2)
    {
    	cout<<e<<" ";
    }nl;
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" ";
	// 	cout<<v[i][1]<<" "<<v[i][2]<<" "<<c2[i];nl;
	// }

}