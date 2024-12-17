#include <bits/stdc++.h>
using namespace std;
int main() {
    int t,i;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        for(i=0;i<a.size();i++)
        {
            if(i==a.size()-1)
                cout<<a[i]-64<<endl;
            else
                cout<<a[i]-64;
        }
    }
    return 0;
}
