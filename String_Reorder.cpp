#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define fr(i, n) for (int i = 0; i < (n); i++)
#define nl cout << "\n"
string reorganizeString(string s) {
    vector<int>freq(26,0);
        for(auto ch:s) { freq[ch - 'a']++ ; }

        priority_queue<pair<int,char>>pq;
        for(int i =0;i<26;i++){
            if(freq[i]>0){
                pq.push({freq[i], (char)(i+'a')});
            }
        }
        // while(pq.size()>0)
        // {
        //     auto x=pq.top();pq.pop();
        //     cout<<x.first<<" "<<x.second;nl;
        // }
        string res = "";
        while(pq.size()>1){
            auto p1 = pq.top(); pq.pop();
            int cnt1 = p1.first;
            char ch1 = p1.second;

            auto p2 = pq.top(); pq.pop();
            int cnt2 = p2.first;
            char ch2 = p2.second;

            res+=ch1;
            res+=ch2;
            if(--cnt1>0) pq.push({cnt1,ch1});
            if(--cnt2>0) pq.push({cnt2,ch2});
        }
        while(!pq.empty()){
            auto p = pq.top(); pq.pop();
            int cnt = p.first;
            char ch = p.second;
            if(cnt>1) return "";
            res +=ch;
        }
        return res;

    }
int32_t main()
{
	string s;
	cin>>s;
	// int n=s.size();
	// vi c(26,0);
	// fr(i,n)
	// {
	// 	c[s[i]-'A']++;
	// }
	// for(int &x:c) cout<<x<<endl;
	// auto it=max_element(c.begin(),c.end());
    // int index=distance(c.begin(),it);
    // string ns;

    // // cout<<n;nl;
    // int half=(n+1)/2;
    // if((c[index]<half)||((n%2==0)&&(c[index]==half)))
    // {
    // 	fr(i,26)
    // 	{
    // 		if(c[i]!=0)
    // 		{
    // 			ns.push_back('A'+i);
    // 			c[i]--;
    // 			break;
    // 		}
    // 	}
    // }
    // else if(c[index]==half)
    // {
    // 	ns.push_back('A'+index);
    // 	c[index]--;
    // }
    // else
    // {
    // 	cout<<-1;
    // 	return 0;
    // }
    // if(n&1)
    // {
    // 	half--;
    // }
    // // cout<<ns<<index;nl;
    // for(int i=1;i<n;i++)
    // {
    // 	it=max_element(c.begin(),c.end());
    //     index=distance(c.begin(),it);
    //     // cout<<index<<half;nl;
    //     // for(int &x:c) cout<<x;
    // 	if((c[index]<half)||(((n-i)%2==0)&&(c[index]==half)))
    //     {
    //     	fr(j,26)
    //     	{
    // 	    	if(c[j]!=0&&ns[i-1]!='A'+j)
    // 		    {
    // 			    ns.push_back('A'+j);
    // 			    c[j]--;
    // 			    break;
    // 		    }
    // 	    }
    //     }
    //     else
    //     {
    //    	    if(ns[i-1]=='A'+index)
    //    	    {
    //    	    for(int j=index+1;i<26;i++)
    //     	{
    // 	    	if(c[j]!=0&&ns[i-1]!='A'+j)
    // 		    {
    // 			    ns.push_back('A'+j);
    // 			    c[j]--;
    // 			    break;
    // 		    }
    // 	    }
    //    	    }
    //    	    else
    //    	    {
    //    	    	ns.push_back('A'+index);
    //    	    	c[index]--;
    //    	    }
    //     }
    //     if(n&1)
    //     {
    //     	if(i%2==0)
    //     	{
    //     		half--;
    //     	}

    //     }
    //     else
    //     {
    //     	if(i&1)
    //     	{
    //     		half--;
    //     	}
    //     }
    //     // cout<<ns<<half;nl;

    // }

    // cout<<ns;nl;
    cout<<reorganizeString(s);nl;
}