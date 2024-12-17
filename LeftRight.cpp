#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int i;
        string a;
        cin>>a;
        for(i=1;i<a.size()-1;i++)
        {
            if(a[i]=='L')
                a[i]=a[i-1];
            else if(a[i]=='R')
                a[i]=a[i+1];
        }
        cout<<a<<endl;
    }
    return 0;
}
