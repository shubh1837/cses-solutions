#include <bits/stdc++.h>
using namespace std;

// #define int long long
#define vi vector
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n;
	cin>>n;
	vi<vi<int>> v(n,vi<int>(3));
	fr(i,n)
	{
		cin>>v[i][0]>>v[i][1];
		v[i][2]=i;
	}
	sort(v.begin(),v.end(),[](vi<int>& a,vi<int>& b)
	{
		if(a[0]==b[0])
		{
			return a[1]<b[1];
		}
		return a[0]<b[0];

	});
	// for(int i=0;i<n;i++)
	// {
	// 	cout<<v[i][0]<<" "<<v[i][1]<<" "<<v[i][2];nl;
	// }
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> min_heap;
	vi<int> ans(n);
	for(int i=0;i<n;i++)
	{
		// cout<<min_heap.size();nl;
		if(min_heap.empty())
		{
			min_heap.push({v[i][1],1});
			ans[v[i][2]]=1;
		}
		else if((min_heap.top().first)>=v[i][0])
		{
			// int siz=min_heap/size();
			ans[v[i][2]]=(min_heap.size()+1);
			min_heap.push({v[i][1],min_heap.size()+1});
			

		}
		else
		{
			int x=min_heap.top().second;
			min_heap.pop();
			ans[v[i][2]]=x;
			min_heap.push({v[i][1],x});

		}
	}
	int m=*max_element(ans.begin(),ans.end());
	cout<<m;nl;
	for(int e:ans)
	{
		cout<<e<<" ";
	}nl;



}