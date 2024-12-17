#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,i,ptr,v;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        bool a[n+9]={false};
        ptr=1;
        for(i=1;i<n;i++)
        {
            cin>>v;
            a[v]=true;
            if(a[ptr])
            {
                while(a[ptr])
                    ptr++;
            }
        }
        cout<<ptr<<endl;
        
    }
    return 0;
}
