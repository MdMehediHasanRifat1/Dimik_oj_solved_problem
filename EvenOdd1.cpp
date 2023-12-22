#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(n%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}