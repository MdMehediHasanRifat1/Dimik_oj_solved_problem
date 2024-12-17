#include <bits/stdc++.h>
using namespace std;
int main() {
    long long t,i,a[16];
    a[0]=1;
    for(i=1;i<=15;i++)
    {
        a[i]=i*a[i-1];
    }
    scanf("%d",&t);
    while(t--)
    {
        long long n;
        double res=0;
        scanf("%lld",&n);
        for(i=1;i<=n;i++)
        {
            res+=(i/(double)a[i]);
        }
        printf("%0.4lf\n",res);
    }
    return 0;
}
