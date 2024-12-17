#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll mod;
ll bigmod(ll b,ll p)
{
    if(p==0)
        return 1;
    ll x=bigmod(b,p/2);
    x=(x*x)%mod;
    if(p%2==1)
        x=(x*b)%mod;
    return x;
}
int main() {
    ll t,a,b,ans;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>mod;
        ans=bigmod(a,b);
        cout<<"Result = "<<ans<<endl;
    }
    return 0;
}
