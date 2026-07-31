#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	string s,p;
	cin>>s;
	vi c(26,0);
	int n=s.size();
	fr(i,n)
	{
		c[s[i]-'A']++;
	}
	bool f=true;
	int x=-1;
	fr(i,26)
	{
		// cout<<c[i];nl;
		if(c[i]&1)
		{
			if(x==-1)
			{
				p.insert(p.size()/2,string((c[i]),('A'+i)));
				x=i;

			}
			else
			{
				f=false;
				break;
			}
		}
		else
		{
			p.insert(0,string((c[i]/2),('A'+i)));
			p.append(string((c[i]/2),('A'+i)));
		}
	}
	if(f)
	{
		cout<<p;
	}
	else
	{
		cout<<"NO SOLUTION";
	}
}