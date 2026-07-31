#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
int ans=0;


bool is_safe(vector<string>&s,int r,int c)
{
	if(s[r][c]=='*')
	{
		return false;
	}
	int i=c-1;
	while(i>=0)
	{
		if(s[r][i--]=='Q')
		{
			return false;
		}
	}
	i=c-1;
	int j=r-1;
	while(i>=0&&j>=0)
	{
		if(s[j--][i--]=='Q')
		{
			return false;
		}
	}
	i=c-1;
	j=r+1;
	while(i>=0&&j<8)
	{
		if(s[j++][i--]=='Q')
		{
			return false;
		}
	}
	return true;
}

void f(vector<string>&s,int c)
{
	if(c==8)
	{
		ans++;
	}
	else
	{
		for(int r=0;r<8;r++)
		{
			if(is_safe(s,r,c))
			{
				s[r][c]='Q';
				f(s,c+1);
				s[r][c]='.';
			}
		}
	}
}

int32_t main()
{
	vector<string> c(8);
	fr(i,8)
	{
		cin>>c[i];
	}
	f(c,0);
	cout<<ans;

	
}