#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,j,n,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                cout<<m<<" ";
            }
            cout<<endl;
        }
        for(i=n-1;i>=1;i--)
        {
            for(j=1;j<=i;j++)
            {
                cout<<m<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
