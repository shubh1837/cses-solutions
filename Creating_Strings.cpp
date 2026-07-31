#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"


int fact(int x)
{
	if(x==1||x==0)
	{
		return 1;
	}
	else
	{
		return x*fact(x-1);
	}
}

int32_t main()
{
	string s;
	cin>>s;
	vi c(26,0);
	int n=s.size();
	fr(i,n)
	{
		c[s[i]-'a']++;
	}
	int total=fact(n);
	fr(i,26)
	{
		if(c[i]>1)
		{
			total/=fact(c[i]);
		}
	}
    sort(s.begin(),s.end());
    cout<<total;nl;
	fr(i,total)
	{
		cout<<s;nl;
		int x=1;
		int f=-1;
		for(int i=n-2;i>=0;i--)
		{
			if(s[i]<s[i+1])
			{
				x++;
				f=s[i];
				break;
			}
			else
			{
				x++;
			}
		}
		sort(s.begin()+(n-x),s.end());
		for(int i=n-x;i<n-1;i++)
		{
			if(s[n-x]<=f)
			{
				swap(s[n-x],s[i+1]);
			}
		}

	}

		
	
}