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
    int arr[n];
    forn(i,n)
    cin>>arr[i];
    int x_gcd = 0, y_gcd = 0;
    
    forn(i,n)
    {
        if(i%2)
        x_gcd = __gcd(x_gcd,arr[i]);
        else
        y_gcd = __gcd(y_gcd,arr[i]);
    }
    
    int a = 1, b = 1;
    forn(i,n)
    {
        if(i%2 == 1 && arr[i]% y_gcd == 0) a = 0;
        if(i%2 == 0 && arr[i]% x_gcd == 0) b = 0;
    }
    
    if(a) cout<<y_gcd<<"\n";
    else if(b) cout<<x_gcd<<"\n";
    else cout<<"0"<<"\n";
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
