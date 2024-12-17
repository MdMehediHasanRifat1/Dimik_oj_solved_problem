#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a>b)
            printf("Invalid!\n");
        else
        {
            for(i=a;i<=b;i+=a)
                cout<<i<<endl;
        }
            cout<<endl;
    }
    return 0;
}
