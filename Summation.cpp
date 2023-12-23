#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i,n,r;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        r=n%10;
        n=n/10000;
        printf("Sum = %d\n",r+n);
    }
    return 0;
}