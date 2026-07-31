#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"

int32_t main()
{
	int n,k;
	cin>>n>>k;
	vi v(n);
	for(auto& x:v)cin>>x;
    map<int,int> m;
    m[v[0]]++;
    int cnt=1;
    int i=0;
    for(int j=1;j<n;j++)
    {
        m[v[j]]++;
        while(m.size()>k)
        {
            m[v[i]]--;
            if(m[v[i]]==0)
            {
                m.erase(v[i]);
            }
            i++;
        }
        cnt+=(j-i+1);
        // cout<<cnt<<" ";
    }
	cout<<cnt;
}