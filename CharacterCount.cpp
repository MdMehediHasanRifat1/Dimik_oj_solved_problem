#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        int b[27];
        bool c[27];
        for(i=0;i<27;i++)
        {
            b[i]=0;
            c[i]=0;
        }
        for(i=0;i<a.size();i++)
        {
            b[a[i]-96]++;
        }
        for(i=0;i<a.size();i++)
        {
            if(c[a[i]-96]==0)
            {
                cout<<a[i]<<" = "<<b[a[i]-96]<<endl;
                c[a[i]-96]=1;
            }
        }
        if(t>0)
            cout<<endl;
    }
    return 0;
}
