#include <bits/stdc++.h>
using namespace std;

string s;
int ans=0;


void solve(int i,int j,int n, uint64_t m )
{
    
    if(i==6&&j==0)
    {
        if(n==48)
            ans++;
        return;
    }
    if (n == 48) return;
    
    int p=i*7+j;
    m|=(1ULL<<p);


    bool u= i>0&&!(m&(1ULL<<(p-7)));
    bool d= i<6&&!(m&(1ULL<<(p+7)));
    bool l= j>0&&!(m&(1ULL<<(p-1)));
    bool r= j<6&&!(m&(1ULL<<(p+1)));

    if(!u&&!d&&l&&r) return;
    if(!l&&!r&&u&&d) return;
    
    char x=s[n];
    if((x=='L'||x=='?')&&l){
        solve(i,j-1,n+1,m);
    }
    if((x=='R'||x=='?')&&r){
        solve(i,j+1,n+1,m);
    }
    if((x=='U'||x=='?')&&u){

        solve(i-1,j,n+1,m);
    }
    if((x=='D'||x=='?')&&d){

        solve(i+1,j,n+1,m);
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>s;   
    solve(0,0,0,0);
    cout<<ans;
}