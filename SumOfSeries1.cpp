#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        ll x,k;
        cin>>x>>k;
        ll sum=0;
        for(ll i=0;i<=k;i++)
            sum+=pow(x,i);
        printf("Result = %lld\n",sum);
    }
    return 0;
}
