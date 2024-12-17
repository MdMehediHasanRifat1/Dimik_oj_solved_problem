#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned long long a,b,d,s,i;
        scanf("%llu%llu%llu",&a,&b,&d);
        s=a*b;
        for(i=s;i<=d;i+=s)
            printf("%llu\n",i);
        printf("\n");
    }
    return 0;
}
