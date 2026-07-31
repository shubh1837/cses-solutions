#include <bits/stdc++.h>
using namespace std;
 
#define int unsigned long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
 
int32_t main()
{
	int q;
	cin>>q;
	vi c(18);
	c[0]=0;
	c[1]=9;
	for(int i=2;i<19;i++)
	{
		c[i]=c[i-1]*10;
	}
	for(int i=2;i<19;i++)
	{
		c[i]=c[i]*i+c[i-1];
	}
	// fr(i,19)  {cout<<c[i];nl;}
	fr(i,q)
	{
		int x;
		cin>>x;
		int d=0;
		for(int i=0;i<19;i++)
		{
			if(x<=c[i])
			{
				d=i;				
				break;
			}
		}
		// cout<<d;nl;
		int pre=(x-c[d-1]);
		int rem=(d-pre%d)%d;
		int num;
		if(rem)
		{
		    num=pre/d+1;
		}
		else
		{
		    num=pre/d;
		}
// 		int num=ceil(1.0*pre/d);
// 		cout<<pre<<" "<<rem<<" "<<num<<" "<<d;nl;
		int p=1;
		fr(i,d-1)
		{
		    p*=10;
		}
		if(d!=1)
		{
		  //  cout<<num<<" ";
			// num=num-1+pow(10,d-1);
			num=num+p-1;
// 			cout<<num<<" ";nl;
		}
		for(int i=0;i<rem;i++)
		{
			num/=10;
		}
 
		cout<<num%10;nl;
 
 
	}
 
}