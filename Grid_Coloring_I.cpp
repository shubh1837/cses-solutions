#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"



// bool f(vector<string>& s,vector<string>& ans,int n,int m,int x,int y)
// {
// 	if(x==0)
// 	{
// 		// ans[x][y]='B';
// 		return false;
// 	}
// 	int v[4];
// 	fr(i,4)
// 	{
// 		v[i]=1;
// 	}
// 	v[ans[x][y]-'A']=0;
// 	// if(x+1<n)
// 	// {
// 	// 	v[ans[x+1][y]-'A']=0;
// 	// }
// 	if(x-1>=0)
// 	{
// 		v[ans[x-1][y]-'A']=0;
// 	}
// 	// if(y+1<m)
// 	// {
// 	// 	v[ans[x][y+1]-'A']=0;
// 	// }
// 	if(y-1>=0)
// 	{
// 		v[ans[x][y-1]-'A']=0;
// 	}
// 	bool t=true;
// 	if(max_element(v,v+4))
// 	{
// 		return true;
// 	}
// 	fr(i,4)
// 	{
// 		if(v[i]&&t)
// 		{
// 			ans[x][y]=s[x][y];
// 			ans[x][y]='A'+i;
// 			t=f(s,ans,n,m,((y+1==m)?(x+1):x),(y+1)%m);

// 		}
// 	}

// }

int32_t main()
{
	int n,m;
	cin>>n>>m;
	
	vector<string> s(n);
	fr(i,n)
	{
		cin>>s[i];
	}

	fr(i,n)
	{
		fr(j,m)
		{


	vi v(4,1);
	v[s[i][j]-'A']=0;
	
	if(i-1>=0)
	{
		v[s[i-1][j]-'A']=0;
	}
	
	if(j-1>=0)
	{
		v[s[i][j-1]-'A']=0;
	}

	fr(k,4)
	{
		// cout<<v[k];
		if(v[k]==1)
		{
			s[i][j]='A'+k;
			break;
		}
	}
	// cout<<s[i][j];nl;

		}
	}
	fr(i,n)
	{
		cout<<s[i];nl;
	}

}