#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll t,i;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        bool f=0;
        for(i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(!f)
            printf("%lld is a prime\n",n);
        else
            printf("%lld is not a prime\n",n);
    }
    return 0;
}
