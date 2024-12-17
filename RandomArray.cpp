#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        bool f1=1,f2=1;
        int temp=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]<temp)
            {
                f1=0;
                break;
            }
            else
            {
                temp=a[i];
            }
        }
        temp=a[0];
        for(i=1;i<n;i++)
        {
            if(a[i]>temp)
            {
                f2=0;
                break;
            }
            else
            {
                temp=a[i];
            }
        }
        if(f1||f2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
