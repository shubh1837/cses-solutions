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
	vi v(n);
	for(auto& x:v)cin>>x;
	int sum=0;
    int cur=0;
    map<int,int> m;
	fr(i,n)
    {
    	if(m.find(v[i])==m.end())
    	{
    		sum+=(i-cur);
    		sum++;
    		m.insert({v[i],i});
    	}
    	else
    	{
    		if(cur>m[v[i]])
    		{
    			sum+=(i-cur);
    		    sum++;
    		}
    		else
    		{
    			sum=sum+i-m[v[i]];
    			cur=m[v[i]]+1;
    		}
    		
    		m[v[i]]=i;
    		
    	}
    	// cout<<sum<<" ";
    	
    }
    cout<<sum;
	
}