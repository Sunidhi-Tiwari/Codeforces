#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ff first 
#define ss second 
const int M = 1e9 + 7;

int binexp(int x, int y, int mod)
{
    int res = 1;
    x = x%mod;
    
    if(x == 0) return 0;
    
    while(y>0)
    {
        if (y%2)
        res = (res*x) % mod;
        y = y/2;
        x = (x*x)%mod;
    }
    return res;
}


void solve()
{   
    int n;
    cin>>n;
    
    if(n%2 == 0) cout<<"2"<<" "<<(n-2-1)<<" "<<"1\n";
    else
    {
        int ans = (n-1)/2;
        if(ans%2 == 0) cout<< ans - 1 <<" "<< ans + 1 << " "<<"1\n";
        else  cout<< ans - 2 <<" "<< ans + 2 << " "<<"1\n";
    }
    return;
}

signed main()
{   IOS
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    
    return 0;
}
