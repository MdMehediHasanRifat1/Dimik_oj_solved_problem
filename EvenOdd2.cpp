#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,n,d;
    string a;
    scanf("%d",&t);
    while(t--)
    {
        cin>>a;
        n=a.size();
        d=a[n-1]-'0';
        if(d%2==0)
            printf("even\n");
        else
            printf("odd\n");
    }
    return 0;
}
