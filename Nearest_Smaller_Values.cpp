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
	fr(i,n)
	{
		cin>>v[i];
	}
	// cout<<0<<" ";	
	// for(int i=1;i<n;i++)
	// {
	// 	for(int j=i-1;j>=0;j--)
	// 	{
	// 		if(v[i]>v[j])
	// 		{
	// 			cout<<j+1<<" ";
	// 			break;
	// 		}
	// 		else if(j==0)
	// 		{
	// 			cout<<0<<" ";
	// 		}
	// 	}

	// }
	stack<int> s;
	s.push(0);
	cout<<0<<" ";
	for(int i=1;i<n;i++)
	{
		if(v[s.top()]<v[i])
		{
			cout<<s.top()+1<<" ";
			s.push(i);
		}
		else
		{
			while(!s.empty())
			{
				if(v[s.top()]<v[i])
    		    {
	    		    cout<<s.top()+1<<" ";
		    	    s.push(i);
		    	    break;
		        }
		        else
		        {
		        	s.pop();
		        }
			}
			if(s.empty())
			{
				cout<<0<<" ";
				s.push(i);
			}
		}
	}

}