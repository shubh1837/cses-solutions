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
	vector<vector<int>> b(n,vector<int> (n,-1));
	queue<pair<int,int>> q;
	b[0][0]=0;
	q.push({0,0});
	while(!q.empty())
	{
		pair<int,int> cur=q.front();
		q.pop();

		if((cur.first+2)<n)
		{
		    if((cur.second+1<n))
			{
				if(b[cur.first+2][cur.second+1]==-1)
				{
					b[cur.first+2][cur.second+1]=b[cur.first][cur.second]+1;
					q.push({cur.first+2,cur.second+1});

				}
			}
			if((cur.second-1>=0))
			{
				if(b[cur.first+2][cur.second-1]==-1)
				{
					b[cur.first+2][cur.second-1]=b[cur.first][cur.second]+1;
					q.push({cur.first+2,cur.second-1});
				}
			}			
		}

		if((cur.first-2)>=0)
		{
			if((cur.second+1<n))
			{
				if(b[cur.first-2][cur.second+1]==-1)
				{
					b[cur.first-2][cur.second+1]=b[cur.first][cur.second]+1;
					q.push({cur.first-2,cur.second+1});
				}
			}
			if((cur.second-1>=0))
			{
				if(b[cur.first-2][cur.second-1]==-1)
				{
					b[cur.first-2][cur.second-1]=b[cur.first][cur.second]+1;
					q.push({cur.first-2,cur.second-1});
				}
			}
		}
		if((cur.second+2)<n)
		{
			if((cur.first+1<n))
			{
				if(b[cur.first+1][cur.second+2]==-1)
				{
	    			b[cur.first+1][cur.second+2]=b[cur.first][cur.second]+1;
					q.push({cur.first+1,cur.second+2});
				}
			}
			if((cur.first-1>=0))
			{
				if(b[cur.first-1][cur.second+2]==-1)
				{
					b[cur.first-1][cur.second+2]=b[cur.first][cur.second]+1;
					q.push({cur.first-1,cur.second+2});
				}
			}
		}
		if((cur.second-2)>=0)
		{
			if((cur.first+1<n))
			{
				if(b[cur.first+1][cur.second-2]==-1)
				{
					b[cur.first+1][cur.second-2]=b[cur.first][cur.second]+1;
					q.push({cur.first+1,cur.second-2});
				}
			}
			if((cur.first-1>=0))
			{
				if(b[cur.first-1][cur.second-2]==-1)
				{
					b[cur.first-1][cur.second-2]=b[cur.first][cur.second]+1;
					q.push({cur.first-1,cur.second-2});
				}
			}
		}
	}

	
	
	fr(i,n)
	{
		fr(j,n)
		{
			
			cout<<b[i][j]<<"\t";
		}nl;
	}
}