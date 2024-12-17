#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,g,l;
        cin>>a>>b;
        g=gcd(a,b);
        l=(a*b)/g;
        printf("LCM = %lld\n",l);
    }
    return 0;
}
