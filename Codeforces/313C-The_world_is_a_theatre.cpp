#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define forn(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define ff first 
#define ss second 
const int M = 1e9 + 7;

int C(int a, int b)
{
    int res = 1;
    for(int i = 0; i<b; i++)
    {
        res *= (a-i);
        res /= (i+1);
    }
    return res;
}

void solve()
{   
    int n,m,t;
    cin>>n>>m>>t;
    
    int ans = 0;
    
    for(int i = 4; i<= t-1; i++)
    {
        ans += C(n,i)*C(m,t-i);
    }
    
    cout<<ans;
    return;
}

signed main()
{   IOS
    
        solve();
    
    return 0;
}
