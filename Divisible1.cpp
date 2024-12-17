#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long a,b,d,s,i;
        scanf("%lld%lld%lld",&a,&b,&d);
        if(a%d==0)
            s=a;
        else
            s=((a/d)+1)*d;
        for(i=s;i<=b;i+=d)
            printf("%lld\n",i);
        printf("\n");
    }
    return 0;
}
